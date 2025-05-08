#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetConnection -FallbackName=NetConnection
#include "IpConnection.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ONLINESUBSYSTEMUTILS_API UIpConnection : public UNetConnection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SocketErrorDisconnectDelay;
    
public:
    UIpConnection();

};

