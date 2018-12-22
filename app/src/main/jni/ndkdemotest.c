//
// Created by solexrd106 on 2018/12/22.
//
#include"com_qin_ndk_ndk_NdkTools.h";

JNIEXPORT jstring JNICALL Java_com_qin_ndk_ndk_NdkTools_getString
  (const struct JNINativeInterface **env, jobject  jclass){
  return (*env)->NewStringUTF(env,"Hellow World");
  };
