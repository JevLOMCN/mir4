#pragma once
#include "CoreMinimal.h"
#include "MM_Auction_Slot_Base.h"
#include "MM_Auction_Slot_BookMark.generated.h"

class UMM_Slot_Base;
class UMM_Slot_Inventory;
class UMirButton;
class UMirCheckBox;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Slot_BookMark : public UMM_Auction_Slot_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_pChkBookMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Inventory* m_pSlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgDisable;
    
public:
    UMM_Auction_Slot_BookMark();

    UFUNCTION(BlueprintCallable)
    void OnSlotClick();
    
    UFUNCTION(BlueprintCallable)
    void OnClickItemSlot(UMM_Slot_Base* pSlotBase);
    
    UFUNCTION(BlueprintCallable)
    void OnClickBookMark(bool bCheck);
    
};

