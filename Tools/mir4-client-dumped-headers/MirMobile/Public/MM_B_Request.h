#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Request.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMirCheckBox;
class UMirListView;
class UMirTextBlock;
class UPanelWidget;
class URequestSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Request : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WatchingAllQuestToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_VerticalSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_HorizontalSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_RequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckCompleteQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_CompleteQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_pCommNotice_Empty;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URequestSlotObj*> m_arRequestSlotObj;
    
public:
    UMM_B_Request();

    UFUNCTION(BlueprintCallable)
    void OnClickStageType(int32 SlotIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickStage(int32 SlotIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBox(bool Checked);
    
};

