#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_Slider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_Slider : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTitleStringID;
    
    UMM_Common_Slider();

    UFUNCTION()
    void SetValueByKeyPad(int64 value_);
    
    UFUNCTION(BlueprintCallable)
    void OnDragSlider(float sliderrate);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedPlusValueBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedOpenPopupKeypadBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedMinValueBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedMinusValueBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedMaxValueBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSlider();
    
};

