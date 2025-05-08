#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Popup_Coupon.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirEditableText;
class UMirImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Coupon : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fUnableConfirmBtnTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_Edit_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_Throbber;
    
public:
    UMM_Popup_Coupon();

    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> ETextCommit);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChanged_EditInput(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Screen();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Confirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Close();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Cancel();
    
};

