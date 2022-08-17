# Java e SQLite

Su [[Android]] come [[database]] si utilizza [[SQLite]] (database alleggerito e veloce) e usarlo per la prima volta è davvero complicato, qui sotto incollo il [[metodo]] più semplice e intuitivo che sono riuscito a creare. Una volta fatta tutta la parte iniziale le [[query]] le stesse di ogni altro tipo di linguaggio [[SQL]].

```java
package com.example.formandsql;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    @Override
    public void onClick(View v) {
        TextView titolo = findViewById(R.id.hello);
        titolo.setText(getString(R.string.app_name));

        DBManager db = new DBManager(getApplicationContext());

        EditText mUsername = (EditText)findViewById(R.id.username);
        EditText mPassword = (EditText)findViewById(R.id.password);

        String usr = mUsername.getText().toString();
        String psw = mPassword.getText().toString();

        Log.d("sql","Username: " + usr + " Password: " + psw);

        db.addData(usr, psw);

        db.getData();
    }

}
```

```java
package com.example.formandsql;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;


public class DBManager extends SQLiteOpenHelper {

    Activity context;
    public static final int DATABASE_VERSION = 1;
    private static final String DATABASE_NAME = "DatabaseHelper.db";

    private static final String TABLE_NAME = "people_table";
    private static final String COL1 = "username";
    private static final String COL2 = "password";

    public DBManager(Context context) {
        super(context, DATABASE_NAME, null, DATABASE_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        String createTable = "CREATE TABLE " + TABLE_NAME + " (ID INTEGER PRIMARY KEY AUTOINCREMENT," + COL1 + " TEXT," + COL2 + " TEXT)";
        db.execSQL(createTable);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS  " + TABLE_NAME);
        onCreate(db);
    }

    public void addData(String item1, String item2) {
        SQLiteDatabase db = this.getWritableDatabase();
        ContentValues contentValues = new ContentValues();
        contentValues.put(COL1, item1);
        contentValues.put(COL2, item2);

        Log.d("sql", "addData: Adding " + COL1 + ":" + item1 + " and " + COL2 + ": " + item2 + " to " + TABLE_NAME);

        db.insert(TABLE_NAME, null, contentValues);
    }

    public void getData(){
        SQLiteDatabase db = this.getReadableDatabase();
        /*String query = "SELECT * FROM " + TABLE_NAME;
        Cursor data = db.rawQuery(query, null);
        String testo = data.getString(data.getColumnIndex("data"));*/
        
        Cursor cursor = db.rawQuery("SELECT * FROM " + TABLE_NAME, null);

        String testo = DatabaseUtils.dumpCursorToString(cursor);

        Log.d("sql", "Tabella: " + testo);
		
		
		// Controlla se una certa cosa esiste nella tabella (ricorda le virgolette intorno alla variabile della condizione (name)
		cursor = db.rawQuery("SELECT password FROM " + TABLE_NAME + " WHERE username='" + name + "'", null);

        String testo = DatabaseUtils.dumpCursorToString(cursor);

        Log.d("sql", "Tabella: " + testo);

        if (cursor.getCount()>0)
            Log.d("sql", "Fra l'username esiste");
        else {
            Log.d("sql", "Mi dispiace ma non esiste");
        }


    }
}
```

---

#### Risorse

https://developer.android.com/training/data-storage/sqlite
https://it.wikipedia.org/wiki/SQLite