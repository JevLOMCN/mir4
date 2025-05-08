#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_DungeonCommon.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Common_Btn_IconText;
class UMM_DungeonCommonBossInfo;
class UMM_DungeonCommonCondition;
class UMM_DungeonCommonGuildExpTicket;
class UMM_DungeonCommonReward;
class UMM_DungeonCommonTicket;
class UMM_DungeonCommonTitle;
class UMM_DungeonCommonTitle2;
class UMM_DungeonCommonTitle3;
class UMM_GuildDevLock;
class UMirCanvasPanel;
class UMirScrollBox;
class UMirTextBlock;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_DungeonCommon : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_pSlotScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pBtnTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* m_pBtnDirectWarpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnNormalMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonTitle* wgtTitleBossInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonTitle2* wgtTitleZoneInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonTitle3* wgtTitleWaveBossInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonCondition* wgtCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonBossInfo* wgtBossInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonTicket* wgtTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuildDevLock* wgtGuildDevelopLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonGuildExpTicket* wgtGuildExpedition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_DungeonCommonReward* wgtReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* ovlLeftTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pBtnNormalItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* canCommom_Bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* canBlackDragon_Bg;
    
    UMM_B_DungeonCommon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetTutorialHighlightEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickEntry();
    
};

