#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CinematicDialogue.generated.h"

class ACutsceneCamera;
class ALevelSequenceActor;
class UCutsceneDialogueWidget;
class UDialogueCameraData;
class ULevelSequencePlayer;
class UObject;

UCLASS(Blueprintable)
class ACinematicDialogue : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueCameraData* m_pDialogueCameraPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_ResourceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TestDirectingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_pLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_pLevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACutsceneCamera* m_pCutsceneCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCutsceneDialogueWidget* m_pDialogueWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pCallbackObject;
    
    ACinematicDialogue(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestDialogueStart();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPlacmentForNextTick();
    
    UFUNCTION(BlueprintCallable)
    void FlipDialogueText();
    
    UFUNCTION(BlueprintCallable)
    void EndCinematicDialogue();
    
};

