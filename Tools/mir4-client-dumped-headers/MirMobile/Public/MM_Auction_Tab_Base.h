#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Auction_Tab_Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Tab_Base : public UWidgetBase {
    GENERATED_BODY()
public:
    UMM_Auction_Tab_Base();

    UFUNCTION(BlueprintCallable)
    void ExitTab();
    
    UFUNCTION(BlueprintCallable)
    void EnterTab();
    
};

