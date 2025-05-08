#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_QuestRelation_Progress.generated.h"

class UMirButton;
class UMirImage;
class UMirProgressBar;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_QuestRelation_Progress : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtProgressValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_ProgressQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_BtnReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgRewardIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Imgindicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgComplete;
    
public:
    UMM_QuestRelation_Progress();

    UFUNCTION(BlueprintCallable)
    void OnClickReward();
    
};

