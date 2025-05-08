#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "CanvasPanel.generated.h"

class UCanvasPanelSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UCanvasPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UCanvasPanel();

    UFUNCTION(BlueprintCallable)
    UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
    
};

