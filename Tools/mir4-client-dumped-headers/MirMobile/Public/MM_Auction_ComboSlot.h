#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Auction_ComboSlot.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_ComboSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnMain;
    
public:
    UMM_Auction_ComboSlot();

    UFUNCTION(BlueprintCallable)
    void OnSlotClick();
    
};

