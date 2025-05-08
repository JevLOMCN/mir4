#pragma once
#include "CoreMinimal.h"
#include "EAIRWALK_STATE.h"
#include "ERideState.h"
#include "MM_AnimInstance.h"
#include "MM_PlayerAnimInstance.generated.h"

class AMM_PC;
class UCurveFloat;

UCLASS(Abstract, Blueprintable, NonTransient)
class UMM_PlayerAnimInstance : public UMM_AnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERideState RideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideWalkDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStandJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CCSTANCE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AniIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRWALK_STATE AirwalkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewWallJumpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DashCameraBlurCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Jump02Curve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_PC* Player;
    
public:
    UMM_PlayerAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void StartWallJump();
    
    UFUNCTION(BlueprintCallable)
    void SetStandLand(bool IsStandLand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NotAirwalkState(EAIRWALK_STATE AirState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirwalkState(EAIRWALK_STATE AirState);
    
};

