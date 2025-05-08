#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOptionKeySettingGroupSlot.generated.h"

class UMM_GameOptionKeySettingSlot;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_GameOptionKeySettingGroupSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOptionKeySettingSlot* Slot_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOptionKeySettingSlot* Slot_2;
    
public:
    UMM_GameOptionKeySettingGroupSlot();

};

