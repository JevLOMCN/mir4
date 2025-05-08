#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_FT_Exchange.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMM_UIAction_FT_Exchange : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_FT_Exchange();

private:
    UFUNCTION()
    void SetCurValue(int64 Value);
    
};

