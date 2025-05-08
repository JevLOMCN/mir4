#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MirEditorBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMirEditorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMirEditorBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ExportSpriteInfo(const TMap<int32, FString> IconIDAndPath);
    
};

