//
// Created by solexrd106 on 2018/12/22.
//

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_qin_cmake_NdkTools_getString(
        JNIEnv *env, jobject /* this */) {
    std::string hello = "cmake";
    return env->NewStringUTF(hello.c_str());
}