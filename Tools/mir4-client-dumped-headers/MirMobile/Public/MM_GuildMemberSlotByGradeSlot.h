#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildMemberSlotByGradeSlot.generated.h"

class UMM_GuildMemberSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildMemberSlotByGradeSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_GuildMemberSlot*> lst_slot;
    
public:
    UMM_GuildMemberSlotByGradeSlot();

};

