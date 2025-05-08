#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_InGame_QuickSlot.generated.h"

class UMM_GameOption_Slider;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_InGame_QuickSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_AutoPotionHpPercen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_AutoPotionMpPercent;
    
public:
    UMM_GameOption_InGame_QuickSlot();

};

