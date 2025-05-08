#include "ValueInfo.h"

FValueInfo::FValueInfo() {
    this->Source = ValueSource::kValueSourceStaticValue;
    this->conversion_successful = false;
}

