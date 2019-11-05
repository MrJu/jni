# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the jni demo.
#

all:
	javac Foo.java
	gcc -fPIC -shared -o libnative.so native.c \
		-I/usr/lib/jvm/java-9-openjdk-armhf/include/ \
		-I/usr/lib/jvm/java-9-openjdk-armhf/include/linux/

clean:
	rm Foo.class libnative.so
