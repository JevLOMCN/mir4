#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GenRoamingDataActor.generated.h"

class AGenRoamingDataActor;

UCLASS(Blueprintable)
class AGenRoamingDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGenRoamingDataActor* Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGenRoamingDataActor* prev;
    
    AGenRoamingDataActor(const FObjectInitializer& ObjectInitializer);

};

