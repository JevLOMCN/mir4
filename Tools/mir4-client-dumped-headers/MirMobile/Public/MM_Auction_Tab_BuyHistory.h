#pragma once
#include "CoreMinimal.h"
#include "MM_Auction_Tab_Base.h"
#include "MM_Auction_Tab_BuyHistory.generated.h"

class UMM_Common_Board_Notice;
class UMirListView;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Tab_BuyHistory : public UMM_Auction_Tab_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtSoldCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtSoldMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtReceiveMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_pListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_pNotice;
    
public:
    UMM_Auction_Tab_BuyHistory();

};

