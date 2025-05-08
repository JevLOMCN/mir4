#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_AccountGuest.generated.h"

class UMM_Common_Btn;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_AccountGuest : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_AccountSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Description;
    
public:
    UMM_Popup_AccountGuest();

    UFUNCTION(BlueprintCallable)
    void OnClickLogin();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

