#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CustomizingComponentBase.h"
#include "MM_Customizing_Picker.generated.h"

class UCanvasPanel;
class UMM_Customizing_ComponentTitle;
class UMM_Customizing_KeyPad;
class UMM_Customizing_Picker_DetailBar;
class UMM_UI_Drag;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Picker : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_ComponentTitle* m_pComponentTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UI_Drag* m_pDragButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_Picker_DetailBar* m_PickerDetail1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_Picker_DetailBar* m_PickerDetail2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_KeyPad* m_EditKeyPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_TouchAreaBG_Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_TouchAreaBG;
    
public:
    UMM_Customizing_Picker();

    UFUNCTION(BlueprintCallable)
    void UpdatePickerValue2(int32 PickerValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePickerValue1(int32 PickerValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlPos(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    void OnStartControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnDragControlButton(FVector2D DragLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSubCategoryEvent(int32 SubCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickPicker(FVector2D Loc);
    
};

