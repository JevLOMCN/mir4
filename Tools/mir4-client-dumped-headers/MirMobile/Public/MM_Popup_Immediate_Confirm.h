#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Immediate_Confirm.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class URichTextBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Immediate_Confirm : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBox* m_RTxtNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CBCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CBImmediateMove;
    
public:
    UMM_Popup_Immediate_Confirm();

    UFUNCTION(BlueprintCallable)
    void OnImmediateMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickImmediateMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
};

