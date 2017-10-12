package com.nbk;

import android.annotation.SuppressLint;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = (TextView) findViewById(R.id.sample_text);


        // String a=checkSignature(this)+"";
        //String a = JniUtil.stringFromJNI(this);
        String a = JniUtil.callBackHello();
        tv.setText(a);
    }


    private int getHashCode() {
        try {
            @SuppressLint("WrongConstant") PackageInfo info = getPackageManager().getPackageInfo(getPackageName(), 64);

            Signature sign = info.signatures[0];

            Log.i("test", "hashCode : " + sign.hashCode());

            return sign.hashCode();

        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();

        }
        return 0;
    }


}
