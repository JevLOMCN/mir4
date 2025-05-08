#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_NewInventory_Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_NewInventory_Base : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iInvenSlotMinCount;
    
    UMM_NewInventory_Base();

};

