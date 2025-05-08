#include "LandscapeLayer.h"

FLandscapeLayer::FLandscapeLayer() {
    this->bVisible = false;
    this->bLocked = false;
    this->HeightmapAlpha = 0.00f;
    this->WeightmapAlpha = 0.00f;
    this->BlendMode = LSBM_AdditiveBlend;
}

