#include "TileMapBlueprintLibrary.h"

UTileMapBlueprintLibrary::UTileMapBlueprintLibrary() {
}

FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32 TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD) {
    return FPaperTileInfo{};
}

FName UTileMapBlueprintLibrary::GetTileUserData(FPaperTileInfo Tile) {
    return NAME_None;
}

FTransform UTileMapBlueprintLibrary::GetTileTransform(FPaperTileInfo Tile) {
    return FTransform{};
}

void UTileMapBlueprintLibrary::BreakTile(FPaperTileInfo Tile, int32& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD) {
}


