#include "Image.h"

UImage::UImage() {
    this->bFlipForRightToLeftFlowDirection = false;
}

void UImage::SetOpacity(float InOpacity) {
}

void UImage::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UImage::SetBrushTintColor(FSlateColor TintColor) {
}

void UImage::SetBrushSize(FVector2D DesiredSize) {
}

void UImage::SetBrushResourceObject(UObject* ResourceObject) {
}

void UImage::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
}

void UImage::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UImage::SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize) {
}

void UImage::SetBrushFromSoftMaterial(TSoftObjectPtr<UMaterialInterface> SoftMaterial) {
}

void UImage::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UImage::SetBrushFromAtlasInterface(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize) {
}

void UImage::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UImage::SetBrush(const FSlateBrush& InBrush) {
}

UMaterialInstanceDynamic* UImage::GetDynamicMaterial() {
    return NULL;
}


