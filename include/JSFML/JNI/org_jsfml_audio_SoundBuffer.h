/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_audio_SoundBuffer */

#ifndef _Included_org_jsfml_audio_SoundBuffer
#define _Included_org_jsfml_audio_SoundBuffer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_SoundBuffer_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundBuffer_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeCopy
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_SoundBuffer_nativeCopy
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeLoadFromMemory
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundBuffer_nativeLoadFromMemory
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeLoadFromSamples
 * Signature: (Ljava/nio/Buffer;III)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundBuffer_nativeLoadFromSamples
  (JNIEnv *, jobject, jobject, jint, jint, jint);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeSaveToFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundBuffer_nativeSaveToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeGetData
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundBuffer_nativeGetData
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeGetSamples
 * Signature: (ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundBuffer_nativeGetSamples
  (JNIEnv *, jobject, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
