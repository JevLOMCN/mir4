#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_NewInventory_Equipment.generated.h"

class UMM_NewInventory;
class UMM_NewInventoryTab;
class UMM_NewInventory_EquipmentAction;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory_Equipment : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_InvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory_EquipmentAction* m_InvenEquipAction;
    
public:
    UMM_NewInventory_Equipment();

};

