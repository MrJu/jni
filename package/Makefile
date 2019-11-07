# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the jni demo.
#

all:
	javac com/artech/demo/Foo.java
	gcc -fPIC -shared -o libnative.so native.c \
		-I/usr/lib/jvm/java-9-openjdk-armhf/include/ \
		-I/usr/lib/jvm/java-9-openjdk-armhf/include/linux/

clean:
	rm com/artech/demo/Foo.class libnative.so
