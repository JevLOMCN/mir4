#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Occupation_Rank_Reward.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_Occupation_Rank_Reward_List;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Occupation_Rank_Reward : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_scroll_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Occupation_Rank_Reward_List* m_mvp_RewardInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Occupation_Rank_Reward_List*> m_win_RewardInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Occupation_Rank_Reward_List*> m_lose_RewardInfoList;
    
public:
    UMM_Popup_Occupation_Rank_Reward();

};

