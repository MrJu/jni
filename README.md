# about

This is a jni demo based on Raspberry Pi3 on Linux version 4.19.23-v7+

# install
```shell
sudo apt-get install ca-certificates-java
sudo apt-get install openjdk-9-jre-headless
sudo apt-get install openjdk-9-jre
sudo apt-get install openjdk-9-jdk
```

# make
modify the -I option, for example, to find the location of jni.h then fix the Makefile

```shell
find /usr -name "jni.h"
/usr/lib/jvm/java-9-openjdk-armhf/include/jni.h
```

# run

to run the program, make sure:

```shell
export LD_LIBRARY_PATH=.
```

then run:

```shell
java Foo
```