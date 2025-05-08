#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_RandomOptionList.generated.h"

class UMM_Common_Btn_Symbol;
class UMirTextBlock;
class UPanelWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_RandomOptionList : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* Scroll_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* Pan_Ability;
    
public:
    UMM_Popup_RandomOptionList();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

