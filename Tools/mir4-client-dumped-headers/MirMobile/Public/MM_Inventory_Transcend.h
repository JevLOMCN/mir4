#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_Inventory_Transcend.generated.h"

class UHorizontalBox;
class UMM_NewInventory;
class UMM_NewInventoryTab;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Inventory_Transcend : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_InvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_pNoticeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtNotice;
    
public:
    UMM_Inventory_Transcend();

};

