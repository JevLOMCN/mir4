#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_MagicStoneQuickTab.generated.h"

class UMM_MagicStoneQuickTabSlot;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_MagicStoneQuickTab : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MagicStoneQuickTabSlot* lst_slot[5];
    
public:
    UMM_MagicStoneQuickTab();

};

