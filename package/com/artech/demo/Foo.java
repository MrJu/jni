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

package com.artech.demo;

public class Foo {
	static {
		System.loadLibrary("native");
	}

	public native int nativeFoo(String string);

	public static void main (String args[]) {
		int ret;
		String string = "foo";
		Foo foo = new Foo();

		ret = foo.nativeFoo(string);
		if (ret < 0) {
			return;
		}

		return;
	}
}
