#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_Inventory_AutoSmelt.generated.h"

class UMM_NewInventory;
class UMM_NewInventoryTab;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Inventory_AutoSmelt : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_InvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
public:
    UMM_Inventory_AutoSmelt();

};

