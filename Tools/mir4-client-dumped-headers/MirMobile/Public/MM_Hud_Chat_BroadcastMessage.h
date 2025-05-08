#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_BroadcastMessage.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_BroadcastMessage : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_WorldMessage;
    
public:
    UMM_Hud_Chat_BroadcastMessage();

};

