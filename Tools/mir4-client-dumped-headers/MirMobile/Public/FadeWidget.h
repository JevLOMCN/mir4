#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "WidgetBase.h"
#include "FadeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFadeWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_BackgroundColor;
    
    UFadeWidget();

    UFUNCTION(BlueprintCallable)
    void StopFade();
    
};

