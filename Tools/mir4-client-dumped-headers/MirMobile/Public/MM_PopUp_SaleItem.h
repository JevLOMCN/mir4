#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_SaleItem.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Common_Btn_Symbol;
class UMM_Item_Make_Slider;
class UMM_Slot_Material;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_SaleItem : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* m_SlotMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Item_Make_Slider* m_NumInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CancleBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_SaleBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_ITEMEXTEND_TITLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_ITEMEXTEND_NORMAL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_ITEMEXTEND_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_ITEMEXTEND_COUNT;
    
public:
    UMM_PopUp_SaleItem();

    UFUNCTION(BlueprintCallable)
    void OnClickSale();
    
    UFUNCTION(BlueprintCallable)
    void OnClickItemExtend();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancle();
    
    UFUNCTION()
    void OnChangeCount(int64 iChangeValue);
    
};

