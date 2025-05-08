#pragma once
#include "CoreMinimal.h"
#include "MM_AnimInstance.h"
#include "MM_ObjectAnimInstance.generated.h"

class AMM_ObjectBase;

UCLASS(Abstract, Blueprintable, NonTransient)
class UMM_ObjectAnimInstance : public UMM_AnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_ObjectBase* Object;
    
public:
    UMM_ObjectAnimInstance();

    UFUNCTION(BlueprintCallable)
    void InitComplete();
    
};

