#include "PaperTileSet.h"

UPaperTileSet::UPaperTileSet() {
    this->TileSheet = NULL;
    this->WidthInTiles = 0;
    this->HeightInTiles = 0;
    this->AllocatedWidth = 0;
    this->AllocatedHeight = 0;
    this->TileWidth = 32;
    this->TileHeight = 32;
    this->Margin = 0;
    this->Spacing = 0;
}


