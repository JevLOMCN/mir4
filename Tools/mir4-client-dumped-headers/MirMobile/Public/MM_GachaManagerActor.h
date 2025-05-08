#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGachaResultType.h"
#include "EGachaSkipButtonType.h"
#include "EGachaType.h"
#include "EGachaViewType.h"
#include "EGachaVisualSettingsType.h"
#include "GachaVisualSettings.h"
#include "MM_GachaManagerActor.generated.h"

class AMM_GachaInteractionObjectActor;
class AMM_GachaObjectActor;
class UChildActorComponent;
class UGachaDirectingData;

UCLASS(Blueprintable)
class AMM_GachaManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGachaDirectingData* m_pGachaDirectingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMM_GachaObjectActor*> m_GachaObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_GachaInteractionObjectActor* m_GachaInteractionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGachaVisualSettingsType, FGachaVisualSettings> m_GachaVisualSettings;
    
    AMM_GachaManagerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGachaAutoCount(const FString& AutoCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSkipButton(EGachaSkipButtonType SkipType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGachaAutoCount(bool bAutoMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGachaVisualSettings(EGachaVisualSettingsType SettingsType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGachaObjectPosition(bool b11Gacha);
    
    UFUNCTION(BlueprintCallable)
    void SetGachaObjectData(bool bSkip, EGachaType GachaType, const TArray<EGachaResultType> GachaResultTypeList, const TArray<int32> ItemIDList, const TArray<int32> ItemGradeList);
    
    UFUNCTION(BlueprintCallable)
    void SetGachaObjectActors(const TArray<UChildActorComponent*> ChildActorComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetGachaInteractionObjectActor(const UChildActorComponent* ChildActorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartGachaFadeOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartGachaFadeInEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartGachaEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayLowGradeOpenSequence();
    
    UFUNCTION(BlueprintCallable)
    void PlayHighGradeOpenSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGachaMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickGachaList(EGachaResultType GachaRewardType);
    
    UFUNCTION(BlueprintCallable)
    void GachaStart();
    
    UFUNCTION(BlueprintCallable)
    void GachaSecondSequence();
    
    UFUNCTION(BlueprintCallable)
    void GachaMovieFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GachaEndCameraEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GachaBeginCameraEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeGachaViewEvent(EGachaViewType ViewType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraView(EGachaViewType ViewType);
    
};

