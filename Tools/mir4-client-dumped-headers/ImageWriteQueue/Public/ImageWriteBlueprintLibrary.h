#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ImageWriteOptions.h"
#include "ImageWriteBlueprintLibrary.generated.h"

class UTexture;

UCLASS(Blueprintable)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UImageWriteBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ExportToDisk(UTexture* Texture, const FString& Filename, const FImageWriteOptions& Options);
    
};

