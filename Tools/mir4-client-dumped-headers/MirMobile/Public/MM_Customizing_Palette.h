#pragma once
#include "CoreMinimal.h"
#include "CustomizingComponentBase.h"
#include "MM_Customizing_Palette.generated.h"

class UMM_Common_Btn;
class UMM_Customizing_PaletteItem;
class UMM_Customizing_Slider_ControlBar;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Palette : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_pColorListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_PresetListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_pCostumeDyeListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_PaletteItem*> m_PaletteItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_OkBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_Slider_ControlBar* m_AddSlider;
    
    UMM_Customizing_Palette();

    UFUNCTION(BlueprintCallable)
    void UpdatePaletteSelectData(int32 PaletteIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIconBrightness(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSubCategoryEvent(int32 SubCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickPaletteItemEvent(int32 PaletteIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickComponentEvent(int32 ComponentID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_Customizing_PaletteItem*> CreatePaletteItem(int32 Count);
    
};

