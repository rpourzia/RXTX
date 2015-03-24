/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gnu_io_RXTXCommDriver */

#ifndef _Included_gnu_io_RXTXCommDriver
#define _Included_gnu_io_RXTXCommDriver
#ifdef __cplusplus
extern "C" {
#endif
#undef gnu_io_RXTXCommDriver_debug
#define gnu_io_RXTXCommDriver_debug 0L
#undef gnu_io_RXTXCommDriver_devel
#define gnu_io_RXTXCommDriver_devel 0L
/* Inaccessible static: noVersionOutput */
/*
 * Class:     gnu_io_RXTXCommDriver
 * Method:    registerKnownPorts
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXCommDriver_registerKnownPorts
  (JNIEnv *, jobject, jint);

/*
 * Class:     gnu_io_RXTXCommDriver
 * Method:    isPortPrefixValid
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXCommDriver_isPortPrefixValid
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gnu_io_RXTXCommDriver
 * Method:    testRead
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_gnu_io_RXTXCommDriver_testRead
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     gnu_io_RXTXCommDriver
 * Method:    getDeviceDirectory
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gnu_io_RXTXCommDriver_getDeviceDirectory
  (JNIEnv *, jobject);

/*
 * Class:     gnu_io_RXTXCommDriver
 * Method:    nativeGetVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gnu_io_RXTXCommDriver_nativeGetVersion
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
