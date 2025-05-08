#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PacketHandlerProfileConfig.generated.h"

UCLASS(Blueprintable, PerObjectConfig, Config=Engine)
class UPacketHandlerProfileConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Components;
    
    UPacketHandlerProfileConfig();

};

