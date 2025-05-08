#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LandscapeWeightmapUsage.generated.h"

class ULandscapeComponent;

UCLASS(Blueprintable, MinimalAPI)
class ULandscapeWeightmapUsage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandscapeComponent* ChannelUsage[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LayerGuid;
    
    ULandscapeWeightmapUsage();

};

