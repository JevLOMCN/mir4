#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_EmptyGuild.generated.h"

class UMM_Common_Btn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_EmptyGuild : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_JoinGuild;
    
public:
    UMM_Hud_Chat_EmptyGuild();

    UFUNCTION(BlueprintCallable)
    void OnClickGuildList();
    
};

