#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Auction_Guild.generated.h"

class UMM_Common_Btn_Symbol;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Guild : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_pTxtGuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnGuildInfo;
    
public:
    UMM_Auction_Guild();

    UFUNCTION(BlueprintCallable)
    void OnSlotClick();
    
};

