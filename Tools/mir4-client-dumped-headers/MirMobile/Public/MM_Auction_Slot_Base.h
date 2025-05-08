#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "WidgetBase.h"
#include "MM_Auction_Slot_Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Slot_Base : public UWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UMM_Auction_Slot_Base();


    // Fix for true pure virtual functions not being implemented
};

