#pragma once
#include "CoreMinimal.h"
#include "MM_NewInventory_Base.h"
#include "MM_NewInventory_Pet.generated.h"

class UMM_NewInventory;

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory_Pet : public UMM_NewInventory_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory* m_Inven;
    
public:
    UMM_NewInventory_Pet();

};

