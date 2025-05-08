#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGachaBoxType.h"
#include "EGachaResultType.h"
#include "MM_GachaInteractionObjectActor.generated.h"

class AMM_GachaManagerActor;
class UAnimSequenceBase;
class UGachaDirectingData;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPetCameraData;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_GachaInteractionObjectActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGachaBoxType TestGacha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGachaResultType TestGachaResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPetCameraData* m_pPetCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GachaMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ResultMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DefaultParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* InteractionParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGachaDirectingData* GachaDirectingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_pIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_pOpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_pEndAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_GachaManagerActor* GachaManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pInteractionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pInteractionOpenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pInteractionMaterialEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pResultAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ParticleSystemComponent;
    
public:
    AMM_GachaInteractionObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestGachaSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartResultSequenceEvent(const FString& ResultName, EGachaBoxType GachaResultType, const int32 ItemGrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDragParticle(UParticleSystem* pParticle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDragUIEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetResultInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDragCameraShakeScaleEvent(const float ShakeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetResultAnimBlueprintEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenCameraShakeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDragCameraShakeEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnTouchStartPosition(FVector2D StartPosition);
    
    UFUNCTION(BlueprintCallable)
    void OnTouchReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnTouchDragPosition(FVector2D DragPosition);
    
    UFUNCTION(BlueprintCallable)
    void FinishSequence();
    
};

