package com.library;

/**
 * Created by TR 105 on 2017/8/29.
 */

public class JniUtil {

    static {
        //一定不要忘记调用!!!!
        System.loadLibrary("Key");
    }

    //获取C中隐藏的AppKey
    public static native String getAppKey();

}
