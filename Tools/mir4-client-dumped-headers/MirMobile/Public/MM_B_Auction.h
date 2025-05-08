#pragma once
#include "CoreMinimal.h"
#include "EAuctionTabType.h"
#include "WidgetBase.h"
#include "MM_B_Auction.generated.h"

class UMM_Auction_Guild;
class UMM_Auction_Tab_Base;
class UMM_CommonHorizontalTabSet;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Auction : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAuctionTabType, UMM_Auction_Tab_Base*> m_mapAuctionTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_pTabAuction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_pSwitchAuction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Auction_Tab_Base*> m_arrAuctionTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_Guild* m_pGuildInfo;
    
public:
    UMM_B_Auction();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

