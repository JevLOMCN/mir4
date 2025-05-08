#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_Preset.generated.h"

class UMM_Customizing_PresetItem;
class UVerticalBox;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Preset : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_pVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_pWrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_PresetItem*> m_PresetArray;
    
    UMM_Customizing_Preset();

    UFUNCTION(BlueprintCallable)
    void UpdatePresetSelectData(int32 PresetIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickPresetItem(int32 GroupId);
    
    UFUNCTION(BlueprintCallable)
    void InitCustomizingPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_Customizing_PresetItem*> CreatePresetItem(int32 Count);
    
};

