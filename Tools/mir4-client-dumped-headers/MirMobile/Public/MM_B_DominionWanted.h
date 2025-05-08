#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_DominionWanted.generated.h"

class UDominionWantedSlotObj;
class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMirListView;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_DominionWanted : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_pTab_Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_pListView_WantedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_pEmpty_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnAddWanted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDominionWantedSlotObj*> m_arWantedSlotObj;
    
public:
    UMM_B_DominionWanted();

    UFUNCTION(BlueprintCallable)
    void OnClickVrtTab(int32 iIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickAddWanted();
    
};

