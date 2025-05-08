#pragma once
#include "CoreMinimal.h"
#include "EGameOptionSliderTitleLocation.h"
#include "EGameOptionSliderType.h"
#include "MM_GameOption_BaseSlot.h"
#include "MM_GameOption_Slider.generated.h"

class UMM_Common_Btn_Symbol;
class UMirProgressBar;
class UMirSlider;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_Slider : public UMM_GameOption_BaseSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionSliderType m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionSliderTitleLocation m_eTitleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSliderButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirSlider* m_Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_SliderPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_SliderUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_SliderDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_pProgressBar;
    
public:
    UMM_GameOption_Slider();

    UFUNCTION(BlueprintCallable)
    void OnDragSliderEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDragSlider(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSliderUp();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSliderDown();
    
};

