#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemResult_AbilitySlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemResult_AbilitySlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DelayTime;
    
    UMM_ItemResult_AbilitySlot();

};

