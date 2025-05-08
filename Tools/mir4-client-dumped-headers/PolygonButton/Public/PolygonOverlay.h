#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PanelWidget -FallbackName=PanelWidget
#include "PolygonOverlay.generated.h"

class UPolygonOverlaySlot;
class UWidget;

UCLASS(Blueprintable)
class POLYGONBUTTON_API UPolygonOverlay : public UPanelWidget {
    GENERATED_BODY()
public:
    UPolygonOverlay();

    UFUNCTION(BlueprintCallable)
    UPolygonOverlaySlot* AddChildToOverlay(UWidget* Content);
    
};

