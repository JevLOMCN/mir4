#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGachaResultType.h"
#include "EGachaType.h"
#include "MM_GachaObjectActor.generated.h"

class AMM_GachaManagerActor;
class UGachaDirectingData;
class UGachaObjectAnimInstance;
class UPaperSprite;
class UPaperSpriteComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class AMM_GachaObjectActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GachaMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* RewardSpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* TouchWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* NameTagWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DefaultParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGachaDirectingData* GachaDirectingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGachaType, TSoftObjectPtr<USkeletalMesh>> m_mapGachaMeshObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGachaObjectAnimInstance* GachaAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_GachaManagerActor* GachaManagerActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bSettingComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_GachaRewardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_CachedGachaMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPaperSprite* m_CachedRewardSprite;
    
public:
    AMM_GachaObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSecondEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMaterialEffectEvent(bool bLegend);
    
    UFUNCTION(BlueprintCallable)
    void StartBeginEffect_Delay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnGachaOpenParticle(UParticleSystem* pParticle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGachaSpriteSize(EGachaType GachaType);
    
    UFUNCTION(BlueprintCallable)
    void SetGachaObjectData(EGachaType GachaType, EGachaResultType GachaResultType, const int32 ItemId, const int32 ItemGrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGachaNameTag(const FString& RewardName, const int32 ItemGrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMaterialParameterEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayGachaOpenEffect_Delay();
    
    UFUNCTION(BlueprintCallable)
    void OnClickButton();
    
    UFUNCTION(BlueprintCallable)
    void GachaOpenAnimEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateGachaMeshMaterialEvent();
    
};

