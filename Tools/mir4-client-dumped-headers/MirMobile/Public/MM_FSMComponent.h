#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EFSM_TYPE.h"
#include "MM_FSMComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMM_FSMComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMM_FSMComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHit_SimpleNetwork();
    
    UFUNCTION()
    void OnHit(int64 AttackerUID, int32 AttackID, int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnEvent(EFSM_TYPE eventType, int32 EventValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFSM(EFSM_TYPE FSMType, bool IsForce, int32 param01, int32 param02);
    
};

