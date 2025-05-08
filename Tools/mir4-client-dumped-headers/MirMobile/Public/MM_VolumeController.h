#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_VolumeController.generated.h"

class UMirButton;
class UMirImage;
class UMirProgressBar;
class UMirSlider;
class UObject;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_VolumeController : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_arVolumeButtonIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_VolumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_VolumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Overlay_VolumeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Prg_VolumeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirSlider* m_Slider_VolumeController;
    
public:
    UMM_VolumeController();

private:
    UFUNCTION(BlueprintCallable)
    void OnDragVolumeControllerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDragVolumeController(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void OnClickVolumeButton();
    
};

