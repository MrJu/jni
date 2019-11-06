/*
 * Copyright (C) 2019 Andrew <mrju.email@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>

JNIEXPORT jbyte JNICALL Java_Foo_nativeByte(
	JNIEnv *env, jobject this, jbyte i, jbyte j)
{
	jbyte k;

	k = i + j;
	printf("%s: %d k = %d\n", __func__, __LINE__, k);

	return k;
}

JNIEXPORT jshort JNICALL Java_Foo_nativeShort(
	JNIEnv *env, jobject this, jshort i, jshort j)
{
	jshort k;

	k = i + j;
	printf("%s: %d k = %hd\n", __func__, __LINE__, k);

	return k;
}

JNIEXPORT jint JNICALL Java_Foo_nativeInt(
	JNIEnv *env, jobject this, jint i, jint j)
{
	jint k;

	k = i + j;
	printf("%s: %d k = %d\n", __func__, __LINE__, k);

	return k;
}

JNIEXPORT jlong JNICALL Java_Foo_nativeLong(
	JNIEnv *env, jobject this, jlong i, jlong j)
{
	jlong k;

	k = i + j;
	printf("%s: %d k = %lld\n", __func__, __LINE__, k);

	return k;
}

JNIEXPORT jfloat JNICALL Java_Foo_nativeFloat(
	JNIEnv *env, jobject this, jfloat i, jfloat j)
{
	jfloat k;

	k = i + j;
	printf("%s: %d k = %f\n", __func__, __LINE__, k);

	return k;
}

JNIEXPORT jdouble JNICALL Java_Foo_nativeDouble(
	JNIEnv *env, jobject this, jdouble i, jdouble j)
{
	jdouble k;

	k = i + j;
	printf("%s: %d k = %f\n", __func__, __LINE__, k);

	return k;
}

JNIEXPORT jboolean JNICALL Java_Foo_nativeBoolean(
	JNIEnv *env, jobject this, jboolean i)
{
	printf("%s: %d i = %d\n", __func__, __LINE__, i);
	return !i;
}

JNIEXPORT jchar JNICALL Java_Foo_nativeChar(
	JNIEnv *env, jobject this, jchar i)
{
	printf("%s: %d j = %hu\n", __func__, __LINE__, i);
	return i;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved)
{
	JNIEnv *env;
	jclass class;

	if ((*jvm)->GetEnv(jvm, (void **)&env, JNI_VERSION_1_4))
		return JNI_ERR;

	return JNI_VERSION_1_4;
}
