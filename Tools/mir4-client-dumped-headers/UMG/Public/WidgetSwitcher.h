#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "WidgetSwitcher.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UMG_API UWidgetSwitcher : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWidgetIndex;
    
    UWidgetSwitcher();

    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWidgetAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetActiveWidget() const;
    
};

