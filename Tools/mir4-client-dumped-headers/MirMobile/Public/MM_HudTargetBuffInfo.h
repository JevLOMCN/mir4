#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudTargetBuffInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudTargetBuffInfo : public UWidgetBase {
    GENERATED_BODY()
public:
    UMM_HudTargetBuffInfo();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

