#pragma once
#include "CoreMinimal.h"
#include "EFSM_TYPE.h"
#include "MM_PreviewModeBase.h"
#include "MM_AnimationTestGameMode.generated.h"

class ACharacter;
class UMM_CharacterBaseAnimInstance;

UCLASS(Blueprintable, NonTransient)
class AMM_AnimationTestGameMode : public AMM_PreviewModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMM_CharacterBaseAnimInstance* m_pNPCAnimInstance;
    
    AMM_AnimationTestGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVehicleInfo(int32 VehicleId, int32 VehicleType);
    
    UFUNCTION(BlueprintCallable)
    void SetCCStance(ACharacter* pCharacter, int32 CCSTANCE);
    
    UFUNCTION(BlueprintCallable)
    void SetAniIndex(ACharacter* pCharacter, int32 AnimID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSM_TYPE GetFSMState(ACharacter* pCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTestMode(bool bPC);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacter(int32 ClassID);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBaseFSM(ACharacter* pCharacter, EFSM_TYPE FsmState);
    
    UFUNCTION(BlueprintCallable)
    void BeginTestGameMode(int32 ClassID);
    
};

