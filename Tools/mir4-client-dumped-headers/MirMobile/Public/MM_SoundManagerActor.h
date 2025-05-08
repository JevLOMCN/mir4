#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMirSoundClass.h"
#include "MM_SoundManagerActor.generated.h"

class ABGMTrigger;
class UAudioComponent;
class UMediaSoundComponent;
class UMirSystemSoundData;
class USoundBase;
class USoundClass;
class USoundConcurrency;
class USoundMix;

UCLASS(Blueprintable)
class AMM_SoundManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirSystemSoundData* m_pMirSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_pBGMAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pBGMSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_pDialogueAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* m_DialogueConcurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* Mix_MasterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMirSoundClass, USoundClass*> m_mapSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMirSoundClass, float> m_mapSettingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMirSoundClass, bool> m_mapMuteState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, int32> m_mapAsyncLoadSoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UAudioComponent*> m_mapPlayAudioComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABGMTrigger*> m_pBGMTriggerArray;
    
public:
    AMM_SoundManagerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMediaSoundVolume(UMediaSoundComponent* pMediaSoundComponent, float fVolume);
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishedPlaySound(UAudioComponent* pFinishedComponent);
    
    UFUNCTION(BlueprintCallable)
    void FinishedDialogueSound(UAudioComponent* pFinishedComponent);
    
};

