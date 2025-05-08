#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PetRenderRoom.generated.h"

class AUIBackGroundActor;
class UAnimInstance;
class UAnimMontage;
class UObject;
class UPetCameraData;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class APetRenderRoom : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pPetPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* m_pUIBackGroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPetCameraData* m_pPetCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_pAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_pMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pMeshObjcet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pAnimObjcet;
    
public:
    APetRenderRoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowupParticleEvent(int32 PetTier);
    
    UFUNCTION(BlueprintCallable)
    void ShowSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoadingEffectEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoadingEffect(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPetScale(float PetScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPetPlacement(FVector PetLoc, FRotator PetRot);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadedMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFloorData(float FloorScale, FVector FloorLocation, FRotator FloorRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOV(float CameraFov);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeshLoadCompleteEvent(int32 PetTier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePetTierEvent(int32 PetTier);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedPetID();
    
};

