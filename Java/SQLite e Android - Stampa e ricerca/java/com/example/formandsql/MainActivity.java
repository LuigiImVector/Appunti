/*

Fra, non ho voglia di spiegartelo, è la versione più semplice da capire che sono riuscito a fare, usa il cervello.
https://developer.android.com/training/data-storage/sqlite

*/

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