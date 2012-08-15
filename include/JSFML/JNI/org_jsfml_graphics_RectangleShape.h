/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_RectangleShape */

#ifndef _Included_org_jsfml_graphics_RectangleShape
#define _Included_org_jsfml_graphics_RectangleShape
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RectangleShape_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeSetSize
 * Signature: (Lorg/jsfml/system/Vector2f;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeSetSize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getSize
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getSize
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeSetTexture
 * Signature: (Lorg/jsfml/graphics/Texture;Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeSetTexture
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeSetTextureRect
 * Signature: (Lorg/jsfml/graphics/IntRect;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeSetTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeSetFillColor
 * Signature: (Lorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeSetFillColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeSetOutlineColor
 * Signature: (Lorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeSetOutlineColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    setOutlineThickness
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_setOutlineThickness
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getTextureRect
 * Signature: ()Lorg/jsfml/graphics/IntRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getTextureRect
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getFillColor
 * Signature: ()Lorg/jsfml/graphics/Color;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getFillColor
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getOutlineColor
 * Signature: ()Lorg/jsfml/graphics/Color;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getOutlineColor
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getOutlineThickness
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_graphics_RectangleShape_getOutlineThickness
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getPointCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_RectangleShape_getPointCount
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeGetPoint
 * Signature: (I)Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_nativeGetPoint
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getLocalBounds
 * Signature: ()Lorg/jsfml/graphics/FloatRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getLocalBounds
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getGlobalBounds
 * Signature: ()Lorg/jsfml/graphics/FloatRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getGlobalBounds
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    setPosition
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_setPosition
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    setRotation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_setRotation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    setScale
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_setScale
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    setOrigin
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_setOrigin
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getPosition
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getPosition
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getRotation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_graphics_RectangleShape_getRotation
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getScale
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getScale
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getOrigin
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getOrigin
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    move
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_move
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    rotate
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_rotate
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    scale
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_scale
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getTransform
 * Signature: ()Lorg/jsfml/graphics/Transform;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getTransform
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    getInverseTransform
 * Signature: ()Lorg/jsfml/graphics/Transform;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RectangleShape_getInverseTransform
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RectangleShape
 * Method:    nativeDraw
 * Signature: (Lorg/jsfml/graphics/RenderTarget;Lorg/jsfml/graphics/RenderStates;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RectangleShape_nativeDraw
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
