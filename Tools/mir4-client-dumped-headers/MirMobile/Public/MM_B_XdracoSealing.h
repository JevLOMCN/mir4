#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_XdracoSealing.generated.h"

class UCanvasPanel;
class UMM_CommonHorizontalTabSet;
class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMM_Common_ToggleBtn;
class UMM_Xdraco_SealingInfo;
class UMM_Xdraco_SealingInventory;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_XdracoSealing : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_pNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_pMainMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_pSubMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToggleBtn* m_pToggle_MakeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pPanel_SealingInvenRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Xdraco_SealingInventory* m_pSealing_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Xdraco_SealingInfo* m_pSealing_Info;
    
public:
    UMM_B_XdracoSealing();

};

