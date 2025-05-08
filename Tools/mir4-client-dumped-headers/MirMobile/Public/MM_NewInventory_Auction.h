#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_NewInventory_Auction.generated.h"

class UMM_NewInventory;
class UMM_NewInventoryTab;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory_Auction : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventoryTab* m_pInvenTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_pInven;
    
public:
    UMM_NewInventory_Auction();

};

