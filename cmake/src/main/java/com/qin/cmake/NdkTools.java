package com.qin.cmake;

/**
 * Create by qindl
 * on 2018/12/22
 */
public class NdkTools {

    //E:\ASWorkSpace\ndk\app/build/intermediates/classes/debug/com/qin/ndk/ndk/NdkTools.class
    static {
        System.loadLibrary("native_lib");
    }

    public static native String getString();
}
