#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UIShopPeriodDetailSlot.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopPeriodDetailSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtPeriodTitle;
    
public:
    UMM_UIShopPeriodDetailSlot();

};

