#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GeometryCollectionDebugDrawComponent.generated.h"

class AGeometryCollectionDebugDrawActor;
class AGeometryCollectionRenderLevelSetActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;
    
    UGeometryCollectionDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

