#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Wanted.generated.h"

class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirImage;
class UMirListView;
class UWantedSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Wanted : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_Tab_Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_CombatPoint_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_CombatPoint_Menu_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Reward_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Reward_Menu_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Chase_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Chase_Menu_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_WantedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Empty_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWantedSlotObj*> m_arWantedSlotObj;
    
public:
    UMM_B_Wanted();

private:
    UFUNCTION(BlueprintCallable)
    void ReqWantedList(int32 ListType, int32 SortType, int32 PageIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClickVrtTab(int32 iIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSortByReward();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSortByCombatPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSortByChaseTime();
    
    UFUNCTION(BlueprintCallable)
    void OnClickInfo();
    
};

