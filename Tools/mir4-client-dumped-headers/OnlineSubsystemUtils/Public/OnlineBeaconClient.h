#pragma once
#include "CoreMinimal.h"
#include "EBeaconConnectionState.h"
#include "OnlineBeacon.h"
#include "OnlineBeaconClient.generated.h"

class AOnlineBeaconHostObject;
class UNetConnection;

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconClient : public AOnlineBeacon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHostObject* BeaconOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* BeaconConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBeaconConnectionState ConnectionState;
    
public:
    AOnlineBeaconClient(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnConnected();
    
};

