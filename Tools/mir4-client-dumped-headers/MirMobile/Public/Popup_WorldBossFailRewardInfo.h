#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "Popup_WorldBossFailRewardInfo.generated.h"

class UHorizontalBox;
class UMM_Slot_Material;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPopup_WorldBossFailRewardInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_reward02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtFixedRewardNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtRewardTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtFailReason;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material* slotReward[7];
    
public:
    UPopup_WorldBossFailRewardInfo();

};

