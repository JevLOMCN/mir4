#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AGProgressDialogData.h"
#include "AGProgressDialogInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ANDROIDGOODIES_API UAGProgressDialogInterface : public UInterface {
    GENERATED_BODY()
};

class ANDROIDGOODIES_API IAGProgressDialogInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void Show(FAGProgressDialogData progressDialogData) PURE_VIRTUAL(Show,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetProgress(int32 Progress) PURE_VIRTUAL(SetProgress,);
    
    UFUNCTION(BlueprintCallable)
    virtual void Dismiss() PURE_VIRTUAL(Dismiss,);
    
};

