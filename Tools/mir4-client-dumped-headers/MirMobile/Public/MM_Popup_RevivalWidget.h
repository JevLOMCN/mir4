#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_RevivalWidget.generated.h"

class UMM_Popup_Revival;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_RevivalWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_Revival* PopupRevival_GuildWar;
    
public:
    UMM_Popup_RevivalWidget();

};

