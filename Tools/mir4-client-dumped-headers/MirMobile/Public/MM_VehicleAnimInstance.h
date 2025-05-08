#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ERideState.h"
#include "MM_VehicleAnimInstance.generated.h"

class AMM_Vehicle;

UCLASS(Blueprintable, NonTransient)
class UMM_VehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERideState RideState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_Vehicle* Vehicle;
    
public:
    UMM_VehicleAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReactionAnimation();
    
};

