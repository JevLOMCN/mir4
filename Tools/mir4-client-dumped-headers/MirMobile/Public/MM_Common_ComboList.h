#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_ComboList.generated.h"

class UMM_Common_ComboSlot;
class UMirButton;
class UMirImage;
class UMirScrollBox;
class UMirTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_ComboList : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_PanelList;
    
    UMM_Common_ComboList();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot(const UMM_Common_ComboSlot* ComboSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

