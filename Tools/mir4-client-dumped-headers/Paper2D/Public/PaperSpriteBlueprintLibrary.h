#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PaperSpriteBlueprintLibrary.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPaperSpriteBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush MakeBrushFromSprite(UPaperSprite* Sprite, int32 Width, int32 Height);
    
};

