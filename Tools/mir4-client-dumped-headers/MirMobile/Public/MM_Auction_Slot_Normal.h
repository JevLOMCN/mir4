#pragma once
#include "CoreMinimal.h"
#include "MM_Auction_Slot_Base.h"
#include "MM_Auction_Slot_Normal.generated.h"

class UMM_Slot_Base;
class UMM_Slot_Inventory;
class UMirButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Slot_Normal : public UMM_Auction_Slot_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Inventory* m_pSlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirTextBlock*> m_arrTxtOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtOverOption;
    
public:
    UMM_Auction_Slot_Normal();

    UFUNCTION(BlueprintCallable)
    void OnSlotClick();
    
    UFUNCTION(BlueprintCallable)
    void OnClickItemSlot(UMM_Slot_Base* pSlotBase);
    
};

