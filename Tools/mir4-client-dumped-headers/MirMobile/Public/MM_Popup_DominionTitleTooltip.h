#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_DominionTitleTooltip.generated.h"

class UMM_Dominion_Title_Tooltip;
class UMirButton;
class UMirImage;
class UMirTextBlock;
class UPanelWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_DominionTitleTooltip : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_pGridTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_pVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Dominion_Title_Tooltip*> m_arrTooltip;
    
public:
    UMM_Popup_DominionTitleTooltip();

    UFUNCTION(BlueprintCallable)
    void OnClockBg();
    
};

