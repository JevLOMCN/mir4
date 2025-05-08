#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DecalSpawnInfo.h"
#include "ParticleBeamSpawnInfo.h"
#include "ParticleSpawnInfo.h"
#include "ParticleSystemComponentInfo.h"
#include "MM_EffectManager.generated.h"

class ASkeletalEffect;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class UMM_EffectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UParticleSystemComponent>, FParticleSystemComponentInfo> ParticleInfoPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ComponentPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> HiddenEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalEffect*> ActorPool;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, TWeakObjectPtr<UParticleSystemComponent>> ScriptEffects;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UParticleSystemComponent>, FParticleBeamSpawnInfo> BeamEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FParticleSpawnInfo> TaskIDAndParticleSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FParticleBeamSpawnInfo> TaskIDAndParticleBeamSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FDecalSpawnInfo> TaskIDAndDecalSpawnInfo;
    
public:
    UMM_EffectManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPartilceSystemFinished(UParticleSystemComponent* FinishedComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnChildActorFinished(ASkeletalEffect* FinishedActor);
    
};

