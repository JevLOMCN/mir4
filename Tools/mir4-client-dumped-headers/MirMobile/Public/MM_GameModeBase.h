#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "MM_GameModeBase.generated.h"

class AContentsLightManager;
class AMM_CharacterPawnBase;
class AMM_GameStateBase;
class AMM_HQPlayerReferenceActor;
class AMM_Monster;
class AMM_PortraitCaptureActor;
class AMM_SituationDirectiveEffect;
class AQuestArrivalDisplayActor;
class AUIBackGroundActor;
class UCanvasRenderTarget2D;
class UMaterialParameterCollection;

UCLASS(Blueprintable, NonTransient)
class AMM_GameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_pBackgroundParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_Monster* m_pFriendMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_CharacterPawnBase* m_pSelectTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_CharacterPawnBase* m_pLockOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EndLevelTravel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* m_pUIBackGroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_SituationDirectiveEffect* SituationDirectiveActor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, TWeakObjectPtr<AQuestArrivalDisplayActor>> MapQuestArrivalDisplayActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_HQPlayerReferenceActor* m_pHQPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_PortraitCaptureActor* m_pPortraitCaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvasRenderTarget2D* m_pPlayerPortraitRenderTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AContentsLightManager* m_pContentsLightManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MyEditorCulture;
    
    AMM_GameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePortrait(bool bDelayCapture, bool bTest);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedInitialEntrySequence();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishDirectingEvent(bool bHudOpen);
    
    UFUNCTION(BlueprintCallable)
    AMM_GameStateBase* GetCurGameState();
    
    UFUNCTION(BlueprintCallable)
    void DeletePortraitImage();
    
};

