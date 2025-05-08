#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_NewInventory_StorageRight.generated.h"

class UMM_NewInventory;
class UMM_NewInventoryTab;
class UMM_SortListBtn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_NewInventory_StorageRight : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_InvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_InvenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SortListBtn* m_SortListBtn;
    
public:
    UMM_NewInventory_StorageRight();

};

