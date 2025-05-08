#include "MaterialExpressionSpriteTextureSampler.h"

UMaterialExpressionSpriteTextureSampler::UMaterialExpressionSpriteTextureSampler() {
    this->ParameterName = TEXT("SpriteTexture");
    this->bSampleAdditionalTextures = false;
    this->AdditionalSlotIndex = 0;
}


