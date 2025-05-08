#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnlineBeacon.generated.h"

class UNetDriver;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Engine)
class ONLINESUBSYSTEMUTILS_API AOnlineBeacon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconConnectionInitialTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconConnectionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
public:
    AOnlineBeacon(const FObjectInitializer& ObjectInitializer);

};

