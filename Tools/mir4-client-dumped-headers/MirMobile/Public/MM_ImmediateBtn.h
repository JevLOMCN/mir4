#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ImmediateBtn.generated.h"

class UButton;
class UCanvasPanel;
class UMM_HudBtnAction;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ImmediateBtn : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCanImmediateMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pBtnImmediateMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_TxtAutoMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnAction* m_pBtnFastRun;
    
public:
    UMM_ImmediateBtn();

    UFUNCTION(BlueprintCallable)
    void OnClickImmediateMove();
    
};

