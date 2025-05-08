#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "MM_PetAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMM_PetAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UMM_PetAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReactionAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeStdAnimation();
    
};

