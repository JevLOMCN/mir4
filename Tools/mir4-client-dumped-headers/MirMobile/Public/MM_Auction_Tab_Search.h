#pragma once
#include "CoreMinimal.h"
#include "MM_Auction_Tab_Base.h"
#include "MM_Auction_Tab_Search.generated.h"

class UMM_Auction_Tab_Search_ColumnName;
class UMM_Auction_Tab_Search_TabGroup;
class UMM_CommonVerticalTabTreeSet;
class UMM_Common_Board_Notice;
class UMirButton;
class UMirCanvasPanel;
class UMirListView;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Tab_Search : public UMM_Auction_Tab_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_pNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabTreeSet* m_pTabSearchList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_pCanvalBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_pListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_Tab_Search_TabGroup* m_pFilterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_Tab_Search_ColumnName* m_pColumnName;
    
public:
    UMM_Auction_Tab_Search();

    UFUNCTION(BlueprintCallable)
    void OnClickBack();
    
};

