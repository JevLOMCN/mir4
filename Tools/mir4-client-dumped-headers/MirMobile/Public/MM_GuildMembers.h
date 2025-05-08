#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildMembers.generated.h"

class UMM_GuildMemberSlot;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildMembers : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuildMemberSlot* guild_member_slot_leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_member;
    
public:
    UMM_GuildMembers();

};

