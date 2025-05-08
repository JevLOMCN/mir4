#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Transcend.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Transcend : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Transcend();

    UFUNCTION(BlueprintCallable)
    void OnClickTranscendOK();
    
    UFUNCTION(BlueprintCallable)
    void OnClickTranscendCancel();
    
};

