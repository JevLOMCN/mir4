#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EPhotoModeCameraMoveButton.h"
#include "EPhotoModeOptionType.h"
#include "EPhotoModeType.h"
#include "PhotoMode_Option.h"
#include "WidgetBase.h"
#include "MM_CustomizingScreenShot.generated.h"

class AMM_CharacterCustomizingActor;
class AMM_CustomizingLevelActor;
class AMM_PhotoModeCharacter;
class UPhotoModeData;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_CustomizingScreenShot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_PhotoModeCharacter* m_pPhotoModeCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeData* m_pPhotoModeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_CharacterCustomizingActor* pCustomizingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_CustomizingLevelActor* pCustomizingLevelActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPhotoModeOptionType, FPhotoMode_Option> m_mapOption;
    
public:
    UMM_CustomizingScreenShot();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSliderValueEvent(const FText& Text_SliderValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubTapEvent(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubButtonEvent(const FText& SubTapTitle, EPhotoModeType PhotoModeState, int32 SubButtonCount, int32 SelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<UWidget*> ShowSubButton(int32 ButtonLength, TArray<UWidget*> ButtonArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSlideControlEvent(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLogoImageEvent(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSliderDataEvent(const FText& SubTapTitle, const FText& Text_SliderValue, const float SlideValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPoseSubButtonEvent(const TArray<FString>& IconPathList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOptionDataEvent(const TMap<EPhotoModeOptionType, FPhotoMode_Option>& mapOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFilterSubButtonEvent(const TArray<FColor>& ColorList, const TArray<FText>& StringList);
    
    UFUNCTION(BlueprintCallable)
    void ScreenShotCaptured(int32 ScreenWidth, int32 ScreenHeight, const TArray<FColor>& ScreenColors);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteScreenCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosedInitEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSubButton(EPhotoModeType PhotoModeState, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickScreenCapture();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOptionSave(bool bSave);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainButton(EPhotoModeType ClickPhotoModeState, bool bChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickClosePopup();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCameraReset();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckeOption(EPhotoModeOptionType CheckOption, bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedSliderValue(float SliderValue);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraMoveButton(EPhotoModeCameraMoveButton ClickButton, bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitOptionEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMainButtonEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSubButtonEvent(int32 CreateCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompleteScreenCaptureEvent();
    
};

