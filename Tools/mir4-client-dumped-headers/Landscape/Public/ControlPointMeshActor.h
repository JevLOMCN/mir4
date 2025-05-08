#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ControlPointMeshActor.generated.h"

class UControlPointMeshComponent;

UCLASS(Blueprintable, NotPlaceable)
class LANDSCAPE_API AControlPointMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlPointMeshComponent* ControlPointMeshComponent;
    
public:
    AControlPointMeshActor(const FObjectInitializer& ObjectInitializer);

};

