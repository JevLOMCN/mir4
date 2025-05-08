#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Individual_Storage.generated.h"

class UMM_NewInventory_StorageLeft;
class UMM_NewInventory_StorageRight;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_B_Individual_Storage : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 INVENTORY_ID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory_StorageLeft* m_InvenLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory_StorageRight* m_InvenRight;
    
public:
    UMM_B_Individual_Storage();

};

