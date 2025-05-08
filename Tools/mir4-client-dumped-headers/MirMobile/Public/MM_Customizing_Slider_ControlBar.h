#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CustomizingComponentBase.h"
#include "MM_Customizing_Slider_ControlBar.generated.h"

class UCanvasPanel;
class UMM_UI_Drag;
class UMirButton;
class UMirImage;
class UMirSlider;
class UMirTextBlock;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Slider_ControlBar : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SLIDER_MAX_SIZE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderCorrectionValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_MinusBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_PlusBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirSlider* m_ValueSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_DataInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_KeypadOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_KeypadOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_CustomizingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_TypeString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UI_Drag* m_pDragButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_SliderBG_Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_SliderBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_ControlPosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_ControlRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SumDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SaveSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AddBtnValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AddValueUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Btn_Pressed_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Btn_Pressed_Up;
    
public:
    UMM_Customizing_Slider_ControlBar();

    UFUNCTION(BlueprintCallable)
    void UpdateSliderValue(int32 SliderValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlSlider(float posX);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnPressPlusBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnPressMinusBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnDragControlButton(FVector2D DragX);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlider(float posX);
    
    UFUNCTION(BlueprintCallable)
    void OnClickReleaseBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickePlusBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClicekMinusBtn();
    
};

