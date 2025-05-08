#pragma once
#include "CoreMinimal.h"
#include "EChatIndicatorType.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_Indicator.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_Indicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatIndicatorType IndicatorType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_count;
    
public:
    UMM_Hud_Chat_Indicator();

};

