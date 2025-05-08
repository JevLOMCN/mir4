#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Ranking_Reward_Popup_New.generated.h"

class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Ranking_Reward_Popup_New : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnCloseBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_pScrollList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtRewardInfo;
    
public:
    UMM_Ranking_Reward_Popup_New();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

