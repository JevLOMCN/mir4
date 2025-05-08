#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Inventory.h"
#include "MM_Slot_Inventory_BG.generated.h"

class UMirImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Inventory_BG : public UMM_Slot_Inventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* slot_inventory_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* slot_inventory;
    
    UMM_Slot_Inventory_BG();

};

