#pragma once
#include "CoreMinimal.h"
#include "MM_Auction_Slot_Base.h"
#include "MM_Auction_Slot_Sell.generated.h"

class UMM_Common_Btn;
class UMM_Slot_Inventory;
class UMirRichTextBlock;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Slot_Sell : public UMM_Auction_Slot_Base {
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
    UMirRichTextBlock* m_pTxtRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnCancle;
    
public:
    UMM_Auction_Slot_Sell();

    UFUNCTION(BlueprintCallable)
    void OnClickCancle();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmCancle();
    
};

