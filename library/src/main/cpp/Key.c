#ifndef NDKENCODERDEMO_CODEC_H
#define NDKENCODERDEMO_CODEC_H

#include <jni.h>
#include <stdio.h>

#endif //NDKENCODERDEMO_CODEC_H

JNIEXPORT jstring JNICALL
Java_com_library_JniUtil_getAppKey(JNIEnv *env, jclass type) {

    // TODO
    char *text = "123456789";

    return (*env)->NewStringUTF(env, text);
}

