#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_TutorialStart.generated.h"

class UMM_Common_Btn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_TutorialStart : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pSkipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pConfirmButton;
    
public:
    UMM_TutorialStart();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSkipButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConfirmButton();
    
    UFUNCTION(BlueprintCallable)
    void EndCloseAnimation();
    
};

