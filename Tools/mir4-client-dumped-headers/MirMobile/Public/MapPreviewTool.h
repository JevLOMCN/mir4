#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MapPreviewTool.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMapPreviewTool : public UWidgetBase {
    GENERATED_BODY()
public:
    UMapPreviewTool();

    UFUNCTION(BlueprintCallable)
    void OnDragTimeDilationSlider(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCommitTimeDilationTextBox(const FText& Text, TEnumAsByte<ETextCommit::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedScalabilityMidBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedScalabilityLowBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedScalabilityHighBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedScalabilityEpicBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedScalabilityCinematicBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedCloseBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTimeDilationSlider();
    
};

