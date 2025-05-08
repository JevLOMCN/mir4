#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActivateTrigger.h"
#include "MyPortalTrigger.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class AMyPortalTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMiniMapHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ExtentBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ArrivalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PortalTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentStageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NextStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHidePortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnablePortal;
    
    AMyPortalTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePortalEffectEvent(UParticleSystem* ParticleTemplate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPortalName(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPortalVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPortalData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPortalCollisionEnable(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollisionEnableEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPortalEvent(bool bOpen, bool bInit);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndOverlap();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBeginOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextStageNameEvent(const FString& strNextStage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOverlapPortal();
    
    UFUNCTION(BlueprintCallable)
    void EnterNextLevel();
    
};

