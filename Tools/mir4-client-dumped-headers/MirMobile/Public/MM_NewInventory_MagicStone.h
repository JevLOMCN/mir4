#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_NewInventory_MagicStone.generated.h"

class UMM_NewInventory;
class UMM_NewInventoryTab;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory_MagicStone : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* inventory_tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* inventory;
    
public:
    UMM_NewInventory_MagicStone();

};

