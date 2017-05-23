/* File : WebTest.i */
%module WebTest

%{
#include "WebTest.h"
%}

%include "std_vector.i"
// Instantiate templates used by example
namespace std {
  %template(DoubleVector) vector<double>;
}

// Let's just grab the original header file here
%include "WebTest.h"

// "L:\Program Files\swigwin-3.0.12\swig.exe" -java -package com.tapifolti.resttest.api -c++ -o WebTest_wrap.cpp WebTest.i