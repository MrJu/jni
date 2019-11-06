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

	public native byte nativeByte(byte i, byte j);
	public native short nativeShort(short i, short j);
	public native int nativeInt(int i, int j);
	public native long nativeLong(long i, long j);
	public native float nativeFloat(float i, float j);
	public native double nativeDouble(double i, double j);
	public native boolean nativeBoolean(boolean i);
	public native char nativeChar(char i);

	public static void main (String args[]) {
		byte i_byte, j_byte, k_byte;
		short i_short, j_short, k_short;
		int i_int, j_int, k_int;
		long i_long, j_long, k_long;
		float i_float, j_float, k_float;
		double i_double, j_double, k_double;
		boolean i_boolean, k_boolean;
		char i_char, k_char;

		Foo foo = new Foo();

		i_byte = 2;
		j_byte = 3;

		i_short = 2;
		j_short = 3;

		i_int = 2;
		j_int = 3;

		i_long = 2l;
		j_long = 3l;

		i_float = 2.0f;
		j_float = 3.0f;

		i_double = 2.0;
		j_double = 3.0;

		i_boolean = true;

		i_char = 'a';

		k_byte = foo.nativeByte(i_byte, j_byte);
		k_short = foo.nativeShort(i_short, j_short);
		k_int = foo.nativeInt(i_int, j_int);
		k_long = foo.nativeLong(i_long, j_long);
		k_float = foo.nativeFloat(i_float, j_float);
		k_double = foo.nativeDouble(i_double, j_double);
		k_boolean = foo.nativeBoolean(i_boolean);
		k_char = foo.nativeChar(i_char);

		System.out.println("k_type = " + k_byte);
		System.out.println("k_short = " + k_short);
		System.out.println("k_int = " + k_int);
		System.out.println("k_long = " + k_long);
		System.out.println("k_float = " + k_float);
		System.out.println("k_double = " + k_double);
		System.out.println("k_boolean = " + k_boolean);
		System.out.println("k_char = " + k_char);

		return;
	}
}
