#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_BP_Attendance_Reward_Slot.generated.h"

class UMM_BP_Attendance_Day_Slot;
class UMM_BattlePass_Item_Slot;
class UMM_Slot_Base;

UCLASS(Blueprintable, EditInlineNew)
class UMM_BP_Attendance_Reward_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_BP_Attendance_Day_Slot* m_Day_Slot;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_BattlePass_Item_Slot* m_Reward_ItemSlot[2];
    
public:
    UMM_BP_Attendance_Reward_Slot();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot(UMM_Slot_Base* pSlot);
    
};

