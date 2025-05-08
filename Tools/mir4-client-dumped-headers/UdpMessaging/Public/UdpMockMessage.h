#pragma once
#include "CoreMinimal.h"
#include "UdpMockMessage.generated.h"

USTRUCT(BlueprintType)
struct FUdpMockMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UDPMESSAGING_API FUdpMockMessage();
};

