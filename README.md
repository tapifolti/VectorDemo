# VectorDemo - C++  lib to be called from Java

1. Compile, build in Visual Studio for Windows
1. Generate JNI wrapper with SWIG
	1. Use SWIG: http://www.swig.org/Doc3.0/SWIGDocumentation.html 
		1. Find Swig 3.0+ download on Internet
		1. Unzip, it contains swig.exe and example projects
		1. Goto the C++ project folder
		1. Add 
			1. JAVA_INCLUDE : Set this to the directory containing jni.h -- $(JAVA_HOME)\include
			1. JAVA_BIN : Set this to the bin directory containing javac.exe -- $(JAVA_HOME)\bin
			1. Need to add include folder to the project: $(JAVA_HOME)\include;$(JAVA_HOME)\include\win32
			1. For Win32 may need to add: ..\include\win32\jni_md.h as include to the generated cpp file
			1. Run SWIG like: `".\swigwin-3.0.12\swig.exe" -java -package <target_java_package> -c++ -o WebTest_wrap.cpp WebTest.i`
			1. Where *.i file is created manually 
			1. Build C++ project after added the generated CPP: WebTest_wrap.cpp
			1. Built C++ project should match to the target OS (32/64 bit)
			1. Pick *.dll file and copy to Java project’s subfolder, it should be loaded via Java code
			1. Pick the generated Java files and add to the Java project, use them to easily call C++ methods
1. Build with Makefile for Linux
	1. `docker run --rm -v /L/Zsuzsa/PeterProject/WebDemo/WebTest:/tmpdev -w /tmpdev uppoints/docker-java-gcc make`

	
