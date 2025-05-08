#pragma once
#include "CoreMinimal.h"
#include "ClothCollisionPrim_Box.h"
#include "ClothCollisionPrim_Convex.h"
#include "ClothCollisionPrim_Sphere.h"
#include "ClothCollisionPrim_SphereConnection.h"
#include "ClothCollisionData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothCollisionPrim_Sphere> Spheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothCollisionPrim_Convex> Convexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothCollisionPrim_Box> Boxes;
    
    FClothCollisionData();
};

