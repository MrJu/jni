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

public class Foo {
	static {
		System.loadLibrary("native");
	}

	public native int nativeFoo(int[] arr);

	public static void main (String args[]) {
		int i, ret, size = 16;
		Foo foo = new Foo();
		int[] buf = new int[size];

		for (i = 0; i < size; i++) {
			buf[i] = 0;
		}

		ret = foo.nativeFoo(buf);
		if (ret < 0) {
			return;
		}

		for (i = 0; i < size; i++) {
			System.out.println("java saying: " + buf[i]);
		}

		return;
	}
}
