#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_B_ItemCollection.generated.h"

class UCollectionSlotObj;
class UMM_Auction_Tab_Search_Enchant;
class UMM_CollectItemInfo;
class UMM_Collect_TierList;
class UMM_CommonHorizontalTabSet;
class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMM_Common_Btn_Symbol;
class UMM_Common_ComboList;
class UMM_Common_ToolTipBtn;
class UMM_ItemCollectEffect;
class UMM_ItemCollectProgress;
class UMirEditableText;
class UMirListView;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_ItemCollection : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CollectionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_Set_Horizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_Set_Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Collect_TierList* m_TierFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_CancelSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_InputTxt_Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Notice_NoResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_ComboList* m_Combo_Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Auction_Tab_Search_Enchant* m_SearchSmeltTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_CollectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_Switer_Infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_ItemCollectProgress* m_Collection_Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_ItemCollectEffect* m_Collection_Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CollectItemInfo* m_Collection_ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* m_Btn_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SuccessRegistStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WarningInsertTextStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WarningOverInsertTextStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HasNoResultStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HasNoFilterStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InsertSearchStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InfoToolTipID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCollectionSlotObj*> m_arCollectionSlotObj;
    
public:
    UMM_B_ItemCollection();

    UFUNCTION(BlueprintCallable)
    void OnCommitEdit(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxChanged(const FString& strSelectItem);
    
    UFUNCTION(BlueprintCallable)
    void OnClickTierSlot(int32 iIndex, bool bSlotUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnClickTab(int32 iGroupSlotID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSearch();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCollectType(int32 SlotIndex, bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCollectGroup(int32 SlotIndex, bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancelSearch();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSlot(int32 iSlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollectAble(int32 CollectionId) const;
    
};

