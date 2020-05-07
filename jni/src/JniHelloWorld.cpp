//
// Created by 李圣杰 on 2020/5/2.
//
#include "JniHelloWorld.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_JniHelloWorld_displayHelloWorld(JNIEnv *env, jobject obj) {
    printf("hello from jni");
    return (*env).NewStringUTF("hello, first met of c & j");
}
#ifdef __cplusplus
}
#endif