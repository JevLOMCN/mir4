#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LandscapeMeshProxyActor.generated.h"

class ULandscapeMeshProxyComponent;

UCLASS(Blueprintable, MinimalAPI)
class ALandscapeMeshProxyActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;
    
public:
    ALandscapeMeshProxyActor(const FObjectInitializer& ObjectInitializer);

};

