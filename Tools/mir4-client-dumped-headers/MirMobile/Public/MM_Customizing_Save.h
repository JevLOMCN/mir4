#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_Save.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Customizing_SaveSlot;
class UMirCheckBox;
class UMirScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Save : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_SaveSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_SaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_OkButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_AutoCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_EmptyNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_SaveSlot*> m_SaveSlotArray;
    
    UMM_Customizing_Save();

    UFUNCTION(BlueprintCallable)
    void UpdateSaveList();
    
private:
    UFUNCTION(BlueprintCallable)
    bool UpdateCheckSaveSlot(int32 _Slot);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAutoSaveBox();
    
    UFUNCTION(BlueprintCallable)
    void RevertCustomizing();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSaveSlot(int32 _Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSaveButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOkButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAutoCheckBox(bool _Check);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_Customizing_SaveSlot*> CreateSaveSlot(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCustomizing();
    
};

