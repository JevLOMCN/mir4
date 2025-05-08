#pragma once
#include "CoreMinimal.h"
#include "PaperTileSetTerrain.generated.h"

USTRUCT(BlueprintType)
struct PAPER2D_API FPaperTileSetTerrain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TerrainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CenterTileIndex;
    
    FPaperTileSetTerrain();
};

