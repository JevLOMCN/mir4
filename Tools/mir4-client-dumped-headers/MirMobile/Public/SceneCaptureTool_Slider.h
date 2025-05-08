#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SceneCaptureTool_Slider.generated.h"

class UMirTextBlock;
class USlider;

UCLASS(Blueprintable, EditInlineNew)
class USceneCaptureTool_Slider : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USlider* Slider_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USlider* Slider_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USlider* Slider_Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Z;
    
public:
    USceneCaptureTool_Slider();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangedSliderZ(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedSliderY(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedSliderX(float Value);
    
};

