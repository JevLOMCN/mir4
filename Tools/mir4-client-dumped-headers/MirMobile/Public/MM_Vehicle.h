#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PoolingInterface.h"
#include "MM_Vehicle.generated.h"

class AMM_PC;
class UAnimInstance;
class UCapsuleComponent;
class UMM_CharacterPartsComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_Vehicle : public AActor, public IPoolingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CharacterPartsComponent* m_pPartsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_pAnimInstace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pDefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_PC* m_ThisPC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Velocity;
    
    AMM_Vehicle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRideOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRideEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleEffectEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDestroyVehicle();
    

    // Fix for true pure virtual functions not being implemented
};

