#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_ServerList_Global.generated.h"

class UMM_Common_Btn_Symbol;
class UPanelWidget;
class UScrollBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_ServerList_Global : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_TopArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_BottomArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_Scroll_RegionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_Scroll_ServerList;
    
public:
    UMM_Popup_ServerList_Global();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

