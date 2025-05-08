#pragma once
#include "CoreMinimal.h"
#include "NetAnalyticsDataConfig.generated.h"

USTRUCT(BlueprintType)
struct FNetAnalyticsDataConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    NETCORE_API FNetAnalyticsDataConfig();
};

