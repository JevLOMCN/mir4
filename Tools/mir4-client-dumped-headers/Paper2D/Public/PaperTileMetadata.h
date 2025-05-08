#pragma once
#include "CoreMinimal.h"
#include "SpriteGeometryCollection.h"
#include "PaperTileMetadata.generated.h"

USTRUCT(BlueprintType)
struct PAPER2D_API FPaperTileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpriteGeometryCollection CollisionData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TerrainMembership[4];
    
    FPaperTileMetadata();
};

