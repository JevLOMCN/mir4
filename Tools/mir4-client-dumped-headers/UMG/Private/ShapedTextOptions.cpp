#include "ShapedTextOptions.h"

FShapedTextOptions::FShapedTextOptions() {
    this->bOverride_TextShapingMethod = false;
    this->bOverride_TextFlowDirection = false;
    this->TextShapingMethod = ETextShapingMethod::Auto;
    this->TextFlowDirection = ETextFlowDirection::Auto;
}

