#include "RetainerBox.h"

URetainerBox::URetainerBox() {
    this->RenderOnInvalidation = false;
    this->RenderOnPhase = true;
    this->Phase = 0;
    this->PhaseCount = 1;
    this->EffectMaterial = NULL;
    this->TextureParameter = TEXT("Texture");
}

void URetainerBox::SetZCompareValue(float zvalue) {
}

void URetainerBox::SetTextureParameter(FName NewTextureParameter) {
}

void URetainerBox::SetRenderingPhase(int32 RenderPhase, int32 TotalPhases) {
}

void URetainerBox::SetEffectMaterial(UMaterialInterface* NewEffectMaterial) {
}

void URetainerBox::RequestRender() {
}

UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial() const {
    return NULL;
}


