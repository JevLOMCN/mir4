#pragma once
#include "CoreMinimal.h"
#include "EStereoChannelMode.h"
#include "SourceEffectMidSideSpreaderSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectMidSideSpreaderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStereoChannelMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStereoChannelMode OutputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEqualPower;
    
    FSourceEffectMidSideSpreaderSettings();
};

