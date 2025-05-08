#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "GridPanel.generated.h"

class UGridSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ColumnFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RowFill;
    
    UGridPanel();

    UFUNCTION(BlueprintCallable)
    void SetRowFill(int32 ColumnIndex, float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnFill(int32 ColumnIndex, float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    UGridSlot* AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
};

