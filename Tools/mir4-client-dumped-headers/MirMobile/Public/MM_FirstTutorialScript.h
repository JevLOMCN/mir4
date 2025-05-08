#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EFirstTutorialType.h"
#include "MM_FirstTutorialScript.generated.h"

UCLASS(Blueprintable)
class AMM_FirstTutorialScript : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VirtualJoyStickTutorialQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestTrackerTutorialQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcQuestMarkTutorialQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HudHideTutorialQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleTutorialPhaseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFirstTutorialType m_TutorialState;
    
    AMM_FirstTutorialScript(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestFunction4();
    
    UFUNCTION(BlueprintCallable)
    void TestFunction3();
    
    UFUNCTION(BlueprintCallable)
    void TestFunction2();
    
    UFUNCTION(BlueprintCallable)
    void TestFunction1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowVirtualJoyStickTutorial(bool bShow);
    
};

