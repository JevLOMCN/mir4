#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudOccupationMenu.generated.h"

class UMM_Hud_OccupationBoard;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudOccupationMenu : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Hud_OccupationBoard* m_pHudOccupationBoard;
    
public:
    UMM_HudOccupationMenu();

};

