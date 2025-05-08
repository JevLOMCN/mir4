#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetAnalyticsDataConfig.h"
#include "NetAnalyticsAggregatorConfig.generated.h"

UCLASS(Blueprintable, PerObjectConfig, Config=Engine)
class UNetAnalyticsAggregatorConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;
    
    UNetAnalyticsAggregatorConfig();

};

