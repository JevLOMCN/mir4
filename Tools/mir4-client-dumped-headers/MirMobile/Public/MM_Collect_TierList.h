#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Collect_TierList.generated.h"

class UMM_Auction_Enchant_ComboList;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Collect_TierList : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TierStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AllStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OneTierStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TwoTierStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ThreeTierStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FourTierStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Auction_Enchant_ComboList* m_CollectTierList;
    
    UMM_Collect_TierList();

    UFUNCTION(BlueprintCallable)
    void OnClickTierSlot(int32 iIndex, bool bSlotUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnClickComboList(int32 iIndex);
    
};

