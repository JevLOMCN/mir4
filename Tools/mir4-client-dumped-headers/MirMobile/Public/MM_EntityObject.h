#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "EFSM_TYPE.h"
#include "MM_EntityObject.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_EntityObject : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSM_TYPE m_CurrentFSM;
    
public:
    AMM_EntityObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EFSM_TYPE GetCurrentFSM();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCurrentFSM(EFSM_TYPE NewFSM);
    
};

