#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MM_CinematicManager.generated.h"

class ACinematicDialogue;
class ALevelSequenceActor;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class UMM_CinematicManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACinematicDialogue* m_pCutsceneDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_pLevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_pLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pCallbackObject;
    
public:
    UMM_CinematicManager();

    UFUNCTION(BlueprintCallable)
    void OnPlaySequence();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSequence();
    
};

