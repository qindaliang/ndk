package com.qin.ndk.ndk;

/**
 * Create by qindl
 * on 2018/12/22
 */
public class NdkTools {

    //E:\ASWorkSpace\ndk\app/build/intermediates/classes/debug/com/qin/ndk/ndk/NdkTools.class
    static {
        System.loadLibrary("ndkdemotest-jni");
    }

    public static native String getString();
}
