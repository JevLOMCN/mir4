#pragma once
#include "CoreMinimal.h"
#include "MM_GameOption_BaseSlot.h"
#include "MM_GameOption_Select.generated.h"

class UCheckBox;
class UMM_Common_ToolTipBtn;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_Select : public UMM_GameOption_BaseSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToolTipID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectStrID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Txt_MainTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* Btn_Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> Txt_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCheckBox*> Slot_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPanelWidget*> Panel_OptionSlotList;
    
public:
    UMM_GameOption_Select();

    UFUNCTION(BlueprintCallable)
    void SetSelectSlot(int32 _Idx);
    
    UFUNCTION(BlueprintCallable)
    void OnClickeSelect5(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickeSelect4(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickeSelect3(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickeSelect2(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickeSelect1(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickeSelect0(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectSlot();
    
};

