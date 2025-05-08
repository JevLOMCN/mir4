#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGProgressDialogBPL.generated.h"

class IAGProgressDialogInterface;
class UAGProgressDialogInterface;

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGProgressDialogBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGProgressDialogBPL();

    UFUNCTION(BlueprintCallable)
    static TScriptInterface<IAGProgressDialogInterface> CreateProgressDialog();
    
};

