package com.nbk;

/**
 * Created by TR 105 on 2017/8/29.
 */

public class JniUtil {

    static {
        System.loadLibrary("native-lib");
    }

    /**
     *
     *
     */
    public static native String stringFromJNI(Object context);

    /**
     * C调用JAVA代码
     *
     * @return
     */
    public static native String callBackHello();


    /**
     * C调用JAVA代码
     * ()V
     */
    public String writeHello() {
        String a = "Hello";
        return a;
    }
}
