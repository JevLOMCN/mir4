#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SaleItemBasket.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Common_Btn_IconText;
class UMM_Common_Btn_Symbol;
class UMM_Slot_Inventory;
class UMirCheckBox;
class UMirTextBlock;
class UWidgetAnimation;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SaleItemBasket : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Inventory*> m_arSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_SelectedCountValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_Check_Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_Wrap_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* m_CB_Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Reset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_AutoSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Common_Board_Notice;
    
public:
    UMM_SaleItemBasket();

    UFUNCTION(BlueprintCallable)
    void OnClick_Reset();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Filter();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Close();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_CheckOption(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_AutoSelect();
    
};

