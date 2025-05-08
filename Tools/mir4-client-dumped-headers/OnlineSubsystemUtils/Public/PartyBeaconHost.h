#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "PartyBeaconHost.generated.h"

class UPartyBeaconState;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ONLINESUBSYSTEMUTILS_API APartyBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPartyBeaconState* State;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SessionTimeoutSecs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TravelSessionTimeoutSecs;
    
public:
    APartyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

