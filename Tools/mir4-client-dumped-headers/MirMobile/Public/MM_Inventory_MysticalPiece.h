#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_Inventory_MysticalPiece.generated.h"

class UMM_Common_Btn;
class UMM_NewInventory;
class UMM_NewInventoryTab;
class UMM_SortListBtn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Inventory_MysticalPiece : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_InvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SortListBtn* m_SortListBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Compose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Equip;
    
    UMM_Inventory_MysticalPiece();

};

