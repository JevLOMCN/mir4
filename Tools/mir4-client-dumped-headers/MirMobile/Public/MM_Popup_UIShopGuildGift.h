#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_UIShopGuildGift.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_UIShopGuildGift : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* mBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* mBtnComfirm;
    
public:
    UMM_Popup_UIShopGuildGift();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

