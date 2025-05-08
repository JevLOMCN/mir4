#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "WidgetBase.h"
#include "SpeechBalloonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpeechBalloonWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    USpeechBalloonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextEvent(const FText& DialogueText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextColorEvent(const FLinearColor& DialogueTextColor);
    
};

