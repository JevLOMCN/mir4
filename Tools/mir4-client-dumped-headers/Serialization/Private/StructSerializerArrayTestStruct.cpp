#include "StructSerializerArrayTestStruct.h"

FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct() {
    this->StaticSingleElement = 0;
    this->StaticInt32Array[0] = 0;
    this->StaticInt32Array[1] = 0;
    this->StaticInt32Array[2] = 0;
    this->StaticFloatArray[0] = 0.00f;
    this->StaticFloatArray[1] = 0.00f;
    this->StaticFloatArray[2] = 0.00f;
}

