/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Text */

#ifndef _Included_org_jsfml_graphics_Text
#define _Included_org_jsfml_graphics_Text
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
#undef org_jsfml_graphics_Text_REGULAR
#define org_jsfml_graphics_Text_REGULAR 0L
#undef org_jsfml_graphics_Text_BOLD
#define org_jsfml_graphics_Text_BOLD 1L
#undef org_jsfml_graphics_Text_ITALIC
#define org_jsfml_graphics_Text_ITALIC 2L
#undef org_jsfml_graphics_Text_UNDERLINED
#define org_jsfml_graphics_Text_UNDERLINED 4L
/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Text_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetString
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetFont
 * Signature: (Lorg/jsfml/graphics/Font;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetFont
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    setCharacterSize
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_setCharacterSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    setStyle
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_setStyle
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetColor
 * Signature: (Lorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getCharacterSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_Text_getCharacterSize
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getStyle
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_Text_getStyle
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getColor
 * Signature: ()Lorg/jsfml/graphics/Color;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getColor
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeFindCharacterPos
 * Signature: (I)Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_nativeFindCharacterPos
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getLocalBounds
 * Signature: ()Lorg/jsfml/graphics/FloatRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getLocalBounds
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getGlobalBounds
 * Signature: ()Lorg/jsfml/graphics/FloatRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getGlobalBounds
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    setPosition
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_setPosition
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    setRotation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_setRotation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    setScale
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_setScale
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    setOrigin
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_setOrigin
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getPosition
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getPosition
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getRotation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_graphics_Text_getRotation
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getScale
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getScale
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getOrigin
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getOrigin
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    move
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_move
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    rotate
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_rotate
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    scale
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_scale
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getTransform
 * Signature: ()Lorg/jsfml/graphics/Transform;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getTransform
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    getInverseTransform
 * Signature: ()Lorg/jsfml/graphics/Transform;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Text_getInverseTransform
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeDraw
 * Signature: (Lorg/jsfml/graphics/RenderTarget;Lorg/jsfml/graphics/RenderStates;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeDraw
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
