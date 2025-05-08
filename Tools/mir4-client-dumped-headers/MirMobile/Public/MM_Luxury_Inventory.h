#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Luxury_Inventory.generated.h"

class UMM_Common_Board_Notice;
class UMM_Costume_Inventory_Tab;
class UMM_Slot_Luxury_Inventory;
class UMirCanvasPanel;
class UScrollBox;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Luxury_Inventory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Costume_Inventory_Tab*> LuxuryTabGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Luxury_Inventory*> LuxurySlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Luxury_Inventory*> m_LuxurySlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* Scroll_WrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* BoardNoticePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_BoardNotice;
    
public:
    UMM_Luxury_Inventory();

};

