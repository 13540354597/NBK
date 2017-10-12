//
// Created by TR 105 on 2017/8/30.
//

#ifndef NBK_NATIVE_LIB_H
#define NBK_NATIVE_LIB_H
#endif //NBK_NATIVE_LIB_H

#include <android/log.h>
#include <stdlib.h>//导入标准C语言函数库
#include <stdint.h>//c99中引进的一个标准C库的头文件
#include <jni.h>

JNIEXPORT jint JNICALL
checkSignature(JNIEnv *env, jobject job, jobject context);
