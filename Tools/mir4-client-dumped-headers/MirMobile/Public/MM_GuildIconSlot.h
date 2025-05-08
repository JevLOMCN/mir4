#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildIconSlot.generated.h"

class UMM_Guild_Icon;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildIconSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_Icon* guild_icon[2];
    
public:
    UMM_GuildIconSlot();

};

