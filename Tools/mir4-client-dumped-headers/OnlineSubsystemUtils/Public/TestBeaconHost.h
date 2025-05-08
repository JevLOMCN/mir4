#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "TestBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API ATestBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    ATestBeaconHost(const FObjectInitializer& ObjectInitializer);

};

