#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_RelationQuestDetailList.generated.h"

class UMM_Common_Btn;
class UMM_Slot_Material;
class UMirImage;
class UMirListView;
class UMirProgressBar;
class UMirTextBlock;
class URelationDetailSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_RelationQuestDetailList : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReqRewarToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_RelationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Prog_Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Prog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Material*> m_Slot_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Complete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RECIEVE_BTN_EFECT_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URelationDetailSlotObj*> m_arRelationDetailSlotObj;
    
public:
    UMM_RelationQuestDetailList();

    UFUNCTION(BlueprintCallable)
    int32 Request_ChildMax();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRequestReward();
    
};

