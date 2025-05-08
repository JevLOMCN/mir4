#pragma once
#include "CoreMinimal.h"
#include "MM_NPCBase.h"
#include "PoolingInterface.h"
#include "MM_FixedNPC.generated.h"

class UCutsceneDialogueWidget;

UCLASS(Blueprintable)
class AMM_FixedNPC : public AMM_NPCBase, public IPoolingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCutsceneDialogueWidget* m_pDialogueWidget;
    
public:
    AMM_FixedNPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestFunction2();
    
    UFUNCTION(BlueprintCallable)
    void TestFunction1();
    
    UFUNCTION(BlueprintCallable)
    void TalkNPC();
    
    UFUNCTION(BlueprintCallable)
    void SkipDialogueText();
    
    UFUNCTION(BlueprintCallable)
    void FlipDialogueText();
    
    UFUNCTION(BlueprintCallable)
    void CloseDialogue();
    

    // Fix for true pure virtual functions not being implemented
};

