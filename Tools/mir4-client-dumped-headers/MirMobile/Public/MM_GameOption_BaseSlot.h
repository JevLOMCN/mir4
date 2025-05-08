#pragma once
#include "CoreMinimal.h"
#include "EGameOptionType.h"
#include "WidgetBase.h"
#include "MM_GameOption_BaseSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_BaseSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionType SaveOptionType;
    
    UMM_GameOption_BaseSlot();

};

