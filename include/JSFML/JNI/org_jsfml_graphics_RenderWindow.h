/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_RenderWindow */

#ifndef _Included_org_jsfml_graphics_RenderWindow
#define _Included_org_jsfml_graphics_RenderWindow
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RenderWindow_nativeCreate__
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeClear
 * Signature: (Lorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeClear
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeSetView
 * Signature: (Lorg/jsfml/graphics/View;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeSetView
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeGetDefaultView
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RenderWindow_nativeGetDefaultView
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeGetViewport
 * Signature: (Lorg/jsfml/graphics/View;)Lorg/jsfml/graphics/IntRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderWindow_nativeGetViewport
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    convertCoords
 * Signature: (FF)Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderWindow_convertCoords
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeConvertCoords
 * Signature: (FFLorg/jsfml/graphics/View;)Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderWindow_nativeConvertCoords
  (JNIEnv *, jobject, jfloat, jfloat, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeDraw
 * Signature: (Lorg/jsfml/graphics/Drawable;Lorg/jsfml/graphics/RenderStates;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeDraw__Lorg_jsfml_graphics_Drawable_2Lorg_jsfml_graphics_RenderStates_2
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeDraw
 * Signature: ([Lorg/jsfml/graphics/Vertex;Lorg/jsfml/graphics/PrimitiveType;Lorg/jsfml/graphics/RenderStates;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeDraw___3Lorg_jsfml_graphics_Vertex_2Lorg_jsfml_graphics_PrimitiveType_2Lorg_jsfml_graphics_RenderStates_2
  (JNIEnv *, jobject, jobjectArray, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeCreate
 * Signature: (Lorg/jsfml/window/VideoMode;Ljava/lang/String;ILorg/jsfml/window/ContextSettings;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeCreate__Lorg_jsfml_window_VideoMode_2Ljava_lang_String_2ILorg_jsfml_window_ContextSettings_2
  (JNIEnv *, jobject, jobject, jstring, jint, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_close
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    isOpen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_RenderWindow_isOpen
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_RenderWindow_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_RenderWindow_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    getSettings
 * Signature: ()Lorg/jsfml/window/ContextSettings;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderWindow_getSettings
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    pollEvent
 * Signature: ()Lorg/jsfml/window/event/Event;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderWindow_pollEvent
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    waitEvent
 * Signature: ()Lorg/jsfml/window/event/Event;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderWindow_waitEvent
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    enableVerticalSync
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_enableVerticalSync
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    showMouseCursor
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_showMouseCursor
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    setPosition
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_setPosition
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    setSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_setSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeSetTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_nativeSetTitle
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    show
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_show
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    enableKeyRepeat
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_enableKeyRepeat
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    nativeSetIcon
 * Signature: (Lorg/jsfml/graphics/Image;)J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RenderWindow_nativeSetIcon
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    setActive
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_setActive
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    display
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_display
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    setFramerateLimit
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_setFramerateLimit
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    setJoystickTreshold
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_setJoystickTreshold
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    pushGLStates
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_pushGLStates
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    popGLStates
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_popGLStates
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderWindow
 * Method:    resetGLStates
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderWindow_resetGLStates
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
