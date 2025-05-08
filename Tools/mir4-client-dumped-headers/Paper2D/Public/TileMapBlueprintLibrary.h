#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PaperTileInfo.h"
#include "TileMapBlueprintLibrary.generated.h"

class UPaperTileSet;

UCLASS(Blueprintable)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTileMapBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPaperTileInfo MakeTile(int32 TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetTileUserData(FPaperTileInfo Tile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTileTransform(FPaperTileInfo Tile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTile(FPaperTileInfo Tile, int32& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
    
};

