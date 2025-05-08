#pragma once
#include "CoreMinimal.h"
#include "COSTUME_PARTS.h"
#include "WidgetBase.h"
#include "MM_Costume_Inventory.generated.h"

class UMM_Costume_Inventory_Tab;
class UMM_Costume_Slot_InvenItem_Long;
class UScrollBox;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Costume_Inventory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Costume_Inventory_Tab*> InventoryTabGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Costume_Slot_InvenItem_Long*> InvenSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* Scroll_WrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_MaxSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_CurrentSlotCount;
    
public:
    UMM_Costume_Inventory();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickSlot(COSTUME_PARTS CostumeParts, int32 CostumeID);
    
};

