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

JNIEXPORT jint JNICALL Java_Foo_nativeFoo(
	JNIEnv *env, jobject jobj, jbyteArray jarr)
{
	jint i, size;
	jbyte *arr;
	jbyte *temp;

	size = (*env)->GetArrayLength(env, jarr);
	temp = malloc(sizeof(jbyte) * size);
	if (!temp)
		return -1;

	for (i = 0; i < size; i++)
		temp[i] = i;

	(*env)->SetByteArrayRegion(env, jarr, 0, size, temp);
	free(temp);

	return 0;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved)
{
	JNIEnv *env;
	jclass class;

	if ((*jvm)->GetEnv(jvm, (void **)&env, JNI_VERSION_1_4))
		return JNI_ERR;

	class = (*env)->FindClass(env, "Foo");
	if (class == NULL)
		return JNI_ERR;

	return JNI_VERSION_1_4;
}
