/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kr_co_softbridge_NDKEcho_NDKSocket */

#ifndef _Included_kr_co_softbridge_NDKEcho_NDKSocket
#define _Included_kr_co_softbridge_NDKEcho_NDKSocket
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     kr_co_softbridge_NDKEcho_NDKSocket
 * Method:    TCPConnect
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_kr_co_softbridge_NDKEcho_NDKSocket_TCPConnect
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     kr_co_softbridge_NDKEcho_NDKSocket
 * Method:    TCPDisconnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kr_co_softbridge_NDKEcho_NDKSocket_TCPDisconnect
  (JNIEnv *, jclass);

/*
 * Class:     kr_co_softbridge_NDKEcho_NDKSocket
 * Method:    TCPSendString
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_kr_co_softbridge_NDKEcho_NDKSocket_TCPSendString
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
