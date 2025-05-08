#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SpectatorBeaconHost.generated.h"

class USpectatorBeaconState;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpectatorBeaconState* State;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SessionTimeoutSecs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TravelSessionTimeoutSecs;
    
public:
    ASpectatorBeaconHost(const FObjectInitializer& ObjectInitializer);

};

