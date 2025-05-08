#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Relation_RewardInfo.generated.h"

class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirListView;
class URelationRewardInfoSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Relation_RewardInfo : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_BG_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_RewardList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URelationRewardInfoSlotObj*> m_arRewardSlotObj;
    
public:
    UMM_Popup_Relation_RewardInfo();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

