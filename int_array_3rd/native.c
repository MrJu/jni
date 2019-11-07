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

JNIEXPORT jintArray JNICALL Java_Foo_nativeFoo(
	JNIEnv *env, jobject jobj, jintArray jarr)
{
	jint i, size;
	jintArray arr;
	jint *__arr, *temp;

	__arr = (*env)->GetIntArrayElements(env, jarr, NULL);
	if (!__arr)
		return NULL;

	size = (*env)->GetArrayLength(env, jarr);
	temp = malloc(sizeof(jint) * size);
	if (!temp) {
		(*env)->ReleaseIntArrayElements(env, jarr, __arr, 0);
		return 0;
	}

	for (i = 0; i < size; i++)
		temp[i] = __arr[i] * 2;

	(*env)->ReleaseIntArrayElements(env, jarr, __arr, 0);

	arr = (*env)->NewIntArray(env, size);
	if (!arr)
		return NULL;

	(*env)->SetIntArrayRegion(env, arr, 0, size, temp);
	free(temp);

	return arr;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved)
{
	JNIEnv *env;
	jclass class;

	if ((*jvm)->GetEnv(jvm, (void **)&env, JNI_VERSION_1_4))
		return JNI_ERR;

	return JNI_VERSION_1_4;
}
