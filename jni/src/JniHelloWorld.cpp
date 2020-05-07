//
// Created by 李圣杰 on 2020/5/2.
//
#include "JniHelloWorld.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_JniHelloWorld_displayHelloWorld(JNIEnv *env, jobject obj) {
    jstring js = (*env).NewStringUTF("hello, first met of c & j");
    printf("hello from jni");
    fflush(stdout);
    return js;
}
#ifdef __cplusplus
}
#endif