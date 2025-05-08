#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ToastLength.h"
#include "AGToastBPL.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGToastBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGToastBPL();

    UFUNCTION(BlueprintCallable)
    static void ShowToast(const FString& Message, TEnumAsByte<ToastLength> Length);
    
};

