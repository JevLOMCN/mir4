#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "EFSM_TYPE.h"
#include "MM_EntityBase.generated.h"

class AMM_TargetDecalActor;
class UCapsuleComponent;
class UMM_AnimInstance;
class UMM_BuffComponent;
class UMM_CharacterPartsComponent;
class UMergedMeshComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_EntityBase : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_BuffComponent* BuffComponent;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TargetDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_TargetDecalActor* TargetDecalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_TargetDecalActor* MainTargetDecalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CharacterPartsComponent* m_pPartsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMergedMeshComponent* MergedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_PreSubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSM_TYPE m_CurrentFSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSM_TYPE PreFSM;
    
public:
    AMM_EntityBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void InitLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetSubState();
    
    UFUNCTION(BlueprintCallable)
    EFSM_TYPE GetPreFSM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh();
    
    UFUNCTION(BlueprintCallable)
    EFSM_TYPE GetCurrentFSM();
    
    UFUNCTION(BlueprintCallable)
    UMM_AnimInstance* GetAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubState(int32 NewSubState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCurrentFSM(EFSM_TYPE NewFSM);
    
};

