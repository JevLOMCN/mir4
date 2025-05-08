#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionDebugDrawActorSelectedRigidBody.generated.h"

class AChaosSolverActor;
class AGeometryCollectionActor;

USTRUCT(BlueprintType)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChaosSolverActor* Solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGeometryCollectionActor* GeometryCollection;
    
    GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionDebugDrawActorSelectedRigidBody();
};

