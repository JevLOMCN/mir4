#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Common_Popup_EditText.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirEditableText;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_Popup_EditText : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* EditTxt_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_First;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_BG;
    
public:
    UMM_Common_Popup_EditText();

    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSecondButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFirstButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

