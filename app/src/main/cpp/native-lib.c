

#include <jni.h>

#include "kit.h"
#include <android/log.h>

#define LOG_TAG "From:C================="
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

JNIEXPORT jstring JNICALL
Java_com_nbk_JniUtil_stringFromJNI(JNIEnv *env, jobject job, jobject context) {

    if (checkSignature(env, job, context) != 1) {
        return "";
    }
    char *returnValue = "000000";
    //LOGE(returnValue);
    return (*env)->NewStringUTF(env, returnValue);
    //->符号的使用是因为，env是2级指针
}


JNIEXPORT jstring JNICALL
Java_com_nbk_JniUtil_callBackHello(JNIEnv *env, jobject job) {

    // TODO
    jclass jClass1 = (*env)->FindClass(env, "com/nbk/JniUtil");
    /**
     * 获取方法签名
     * 执行 javap -s 全类名 获取
     */
    jmethodID jMethodID1 = (*env)->GetMethodID(env, jClass1, "writeHello", "()Ljava/lang/String;");
    jobject jObject1 = (*env)->AllocObject(env, jClass1);


    //(*env)->CallObjectMethod(env, jObject1, jMethodID1);
    //char *returnValue =(*env)->CallObjectMethod(env, jObject1, jMethodID1);
    //char *returnValue = "";
    //return (*env)->NewStringUTF(env, returnValue);

    return (*env)->CallObjectMethod(env, jObject1, jMethodID1);
}


