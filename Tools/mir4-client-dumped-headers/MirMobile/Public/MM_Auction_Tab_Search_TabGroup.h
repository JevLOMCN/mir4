#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Auction_Tab_Search_TabGroup.generated.h"

class UMM_Auction_ComboList;
class UMM_Auction_Tab_Search_Enchant;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirEditableText;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Tab_Search_TabGroup : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnItemSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtFindEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_pEditItemSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_ComboList* m_pComboList_Job;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_ComboList* m_pComboList_Grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_Tab_Search_Enchant* m_pSearchEnchant;
    
public:
    UMM_Auction_Tab_Search_TabGroup();

    UFUNCTION(BlueprintCallable)
    void OnSearch(bool bIsSearchDelay, bool bRefreshSearchList);
    
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
    UFUNCTION(BlueprintCallable)
    void OnRefresh();
    
    UFUNCTION(BlueprintCallable)
    void OnCommitSearch(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnClickTab(int32 iGroupSlotID);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSlot(int32 iSlotID);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSearch(const FText& Text);
    
};

