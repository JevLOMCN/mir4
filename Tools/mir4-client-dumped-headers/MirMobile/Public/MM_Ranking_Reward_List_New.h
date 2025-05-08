#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Ranking_Reward_List_New.generated.h"

class UMM_Slot_DungeonMaterial;
class UMM_Slot_New_Ranking_Reward_Buff;
class UMirCanvasPanel;
class UMirImage;
class UMirTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Ranking_Reward_List_New : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtRankValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_New_Ranking_Reward_Buff* m_RewardItem1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_New_Ranking_Reward_Buff* m_RewardItem2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_New_Ranking_Reward_Buff* m_RewardItem3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_New_Ranking_Reward_Buff* m_RewardItem4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* m_pWrapBoxBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgDevideLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_pPanelItemReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_DungeonMaterial* m_pSlotItem1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_DungeonMaterial* m_pSlotItem2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_DungeonMaterial* m_pSlotItem3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_DungeonMaterial* m_pSlotItem4;
    
public:
    UMM_Ranking_Reward_List_New();

};

