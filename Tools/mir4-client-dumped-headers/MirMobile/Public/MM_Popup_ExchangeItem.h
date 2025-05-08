#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_ExchangeItem.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_ExchangeItemInfo;
class UMM_Item_Make_Slider;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_ExchangeItem : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ExchangeItemInfo* m_ExchangeItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Item_Make_Slider* m_NumInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Confirm;
    
public:
    UMM_Popup_ExchangeItem();

    UFUNCTION()
    void OnSliderValueChanged(int64 iValue);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Confirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Close();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Cancel();
    
};

