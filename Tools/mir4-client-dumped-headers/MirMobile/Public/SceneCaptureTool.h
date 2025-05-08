#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
#include "WidgetBase.h"
#include "SceneCaptureTool.generated.h"

class ADirectionalLight;
class UButton;
class UComboBoxString;
class UMirTextBlock;
class USceneCaptureTool_Slider;
class USlider;

UCLASS(Blueprintable, EditInlineNew)
class USceneCaptureTool : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADirectionalLight> DirLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureTool_Slider* Slider_CameraRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureTool_Slider* Slider_DirLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox_ChangePC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox_ChangeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Btn_Reset_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Btn_Reset_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Btn_Reset_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Btn_Save_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Btn_Save_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* Btn_Save_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Sensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USlider* Slider_Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Opacity;
    
public:
    USceneCaptureTool();

    UFUNCTION(BlueprintCallable)
    void OnSaveCamera03();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveCamera02();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveCamera01();
    
    UFUNCTION(BlueprintCallable)
    void OnResetCamera03();
    
    UFUNCTION(BlueprintCallable)
    void OnResetCamera02();
    
    UFUNCTION(BlueprintCallable)
    void OnResetCamera01();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedWidgetOpacity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedSceneCameraRotation(FRotator Rotator);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedDirLightRotation(FRotator Rotator);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedComboxUI(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedComboxPC(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void MoveUp(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraPitchInput(float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraFOVInput(float Value);
    
};

