#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "PanelWidget.generated.h"

class UPanelSlot;

UCLASS(Abstract, Blueprintable)
class UMG_API UPanelWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPanelSlot*> Slots;
    
public:
    UPanelWidget();

    UFUNCTION(BlueprintCallable)
    bool RemoveChildAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChild(UWidget* Content);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasChild(UWidget* Content) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyChildren() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildrenCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildIndex(const UWidget* Content) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetChildAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWidget*> GetAllChildren() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UWidget* Content);
    
};

