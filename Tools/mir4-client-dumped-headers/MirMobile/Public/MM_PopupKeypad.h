#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopupKeypad.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopupKeypad : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_confirm;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* lst_btn_number[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_reset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_remove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_50;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_100;
    
public:
    UMM_PopupKeypad();

    UFUNCTION(BlueprintCallable)
    void OnClickReset();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRemove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber9();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber8();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber7();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber6();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber5();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber4();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber3();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber2();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber1();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNumber0();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMax();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClick50();
    
    UFUNCTION(BlueprintCallable)
    void OnClick100();
    
    UFUNCTION(BlueprintCallable)
    void OnClick10();
    
};

