#pragma once
#include "CoreMinimal.h"
#include "CustomizingComponentBase.h"
#include "MM_Customizing_PaletteThumbnail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_PaletteThumbnail : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UMM_Customizing_PaletteThumbnail();

    UFUNCTION(BlueprintCallable)
    void UpdateThumbnailColorData(int32 nCustomizingValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThumbnailBrightness(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    void OnClickThumbnail(int32 PaletteIndex);
    
};

