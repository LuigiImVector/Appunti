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
