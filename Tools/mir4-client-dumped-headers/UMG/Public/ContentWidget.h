#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "ContentWidget.generated.h"

class UPanelSlot;
class UWidget;

UCLASS(Abstract, Blueprintable)
class UMG_API UContentWidget : public UPanelWidget {
    GENERATED_BODY()
public:
    UContentWidget();

    UFUNCTION(BlueprintCallable)
    UPanelSlot* SetContent(UWidget* Content);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPanelSlot* GetContentSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetContent() const;
    
};

