#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_ServerList.generated.h"

class UMM_Common_Btn_Symbol;
class UPanelWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_ServerList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_Scroll_ServerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Scroll_Wrap;
    
public:
    UMM_Popup_ServerList();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

