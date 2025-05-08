#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ESLIDEBAR_TYPE.h"
#include "WidgetBase.h"
#include "MM_Costume_SlideBar.generated.h"

class UCanvasPanel;
class UMM_UI_Drag;
class UMirButton;
class UMirTextBlock;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Costume_SlideBar : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SLIDER_MAX_SIZE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderCorrectionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESLIDEBAR_TYPE SlideBar_Channel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Minus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Plus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UI_Drag* UIDrag_Slide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_SliderBG_Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_SliderBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_ControlPosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_ControlRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AddBtnValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AddValueUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Btn_Pressed_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Btn_Pressed_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_PERCENT;
    
public:
    UMM_Costume_SlideBar();

    UFUNCTION(BlueprintCallable)
    void UpdateSliderValue(int32 SlideBarType, int32 SliderValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlSlider_1(float posX);
    
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

