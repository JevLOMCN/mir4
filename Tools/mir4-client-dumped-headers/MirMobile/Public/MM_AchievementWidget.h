#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_AchievementWidget.generated.h"

class UAchSlotObj;
class UMM_CommonVerticalTabSet;
class UMM_Common_Btn;
class UMirListView;

UCLASS(Blueprintable, EditInlineNew)
class UMM_AchievementWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_ReceiveAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_AchList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ALL_RECIEVE_BTN_EFECT_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAchSlotObj*> m_arAchSlotObj;
    
public:
    UMM_AchievementWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickedVerticalTabBtn(int32 idx, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedReceiveAllBtn();
    
};

