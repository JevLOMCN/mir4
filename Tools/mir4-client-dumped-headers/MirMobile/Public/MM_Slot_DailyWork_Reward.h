#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Slot_DailyWork_Reward.generated.h"

class UMirButton;
class UMirCanvasPanel;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_DailyWork_Reward : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* mPanelEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* mImgIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* mBtnSlot;
    
public:
    UMM_Slot_DailyWork_Reward();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot();
    
};

