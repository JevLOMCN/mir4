#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_ToolTip.generated.h"

class UMirButton;
class UMirRichTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_ToolTip : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Overlay_ToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_ToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Screen;
    
public:
    UMM_Common_ToolTip();

    UFUNCTION(BlueprintCallable)
    void OnClick_Screen();
    
};

