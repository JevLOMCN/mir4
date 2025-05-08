#pragma once
#include "CoreMinimal.h"
#include "PaperTileInfo.generated.h"

class UPaperTileSet;

USTRUCT(BlueprintType)
struct FPaperTileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTileSet* TileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PackedTileIndex;
    
    PAPER2D_API FPaperTileInfo();
};

