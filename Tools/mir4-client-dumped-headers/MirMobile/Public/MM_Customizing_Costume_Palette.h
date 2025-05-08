#pragma once
#include "CoreMinimal.h"
#include "CustomizingComponentBase.h"
#include "MM_Customizing_Costume_Palette.generated.h"

class UMM_Common_Btn_IconText;
class UMM_Customizing_PaletteItem;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Costume_Palette : public UCustomizingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_PaletteItem*> m_PaletteItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_pColorListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_PaletteItem* m_MainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Customizing_PaletteItem* m_SubColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* m_pBtnRandomColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* m_pBtnPresetPopup;
    
    UMM_Customizing_Costume_Palette();

    UFUNCTION(BlueprintCallable)
    void UpdateThumbnailColorData_Sub(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThumbnailColorData_Main(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThumbnailBrightness_Sub(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThumbnailBrightness_Main(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateComponentList();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRandomColor();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPresetPopup();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPaletteItemEvent(int32 PaletteIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDirectDye_Sub(int32 _None);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDirectDye_Main(int32 _None);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_Customizing_PaletteItem*> CreatePaletteItem(int32 Count);
    
};

