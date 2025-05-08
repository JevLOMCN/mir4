#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Restore_Exp_Slot.generated.h"

class UMM_Dominion_Goods_Slot;
class UMM_Slot_Material;
class UMirButton;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Restore_Exp_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Goods_Slot* m_pGoodsSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* m_pSlotExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgDiable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnSlotClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnSlotDelete;
    
public:
    UMM_Popup_Restore_Exp_Slot();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDelete();
    
};

