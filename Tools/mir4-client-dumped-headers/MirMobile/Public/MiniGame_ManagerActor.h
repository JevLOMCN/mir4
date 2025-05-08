#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMiniGameSoundType.h"
#include "MiniGame_ManagerActor.generated.h"

class AMiniGame_BackgroundActor;
class AMiniGame_MonsterActor;
class AMiniGame_PlayerActor;
class UMM_MiniGameWidget;
class UMiniGameData;
class UPaperFlipbook;

UCLASS(Blueprintable)
class AMiniGame_ManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiniGameData* m_MiniGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniGame_BackgroundActor* m_BackgroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniGame_BackgroundActor* m_NextBackgroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniGame_PlayerActor* m_PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMiniGame_MonsterActor*> m_arMonsterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_MiniGameWidget* m_MiniGameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPaperFlipbook*> m_EffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBpTickFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_fCameraProductionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProductionCameraPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProductionPlayerPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPatchEndDelay;
    
    AMiniGame_ManagerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMiniGameSound_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AMiniGame_MonsterActor* SpawnMonster(float SpawnPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AMiniGame_BackgroundActor* SpawnBackground_BP(float SpawnPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetGameMapLocation_BP(float fGapValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMiniGameSound_BP(EMiniGameSoundType eSoundType);
    
    UFUNCTION(BlueprintCallable)
    void PlayMiniGameSound(EMiniGameSoundType eSoundType);
    
};

