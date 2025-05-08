#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Revival.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Revival : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Revival();

    UFUNCTION(BlueprintCallable)
    void OnClickRevivalFree();
    
    UFUNCTION(BlueprintCallable)
    void OnClickImmediateRevival();
    
    UFUNCTION(BlueprintCallable)
    void OnClickHelp();
    
    UFUNCTION(BlueprintCallable)
    void ExcuteSafeRevival();
    
};

