#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "VerticalBox.generated.h"

class UVerticalBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UVerticalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UVerticalBox();

    UFUNCTION(BlueprintCallable)
    UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
    
};

