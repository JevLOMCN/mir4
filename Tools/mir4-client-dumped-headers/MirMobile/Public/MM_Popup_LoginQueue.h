#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_LoginQueue.generated.h"

class UMM_Common_Btn;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_LoginQueue : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Cancel;
    
public:
    UMM_Popup_LoginQueue();

    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
};

