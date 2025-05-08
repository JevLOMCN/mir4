#include "PaperTileMapComponent.h"

UPaperTileMapComponent::UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->MapWidth = 4;
    this->MapHeight = 4;
    this->TileWidth = 32;
    this->TileHeight = 32;
    this->DefaultLayerTileSet = NULL;
    this->UseSingleLayerIndex = 0;
    this->bUseSingleLayer = false;
}

void UPaperTileMapComponent::SetTileMapColor(FLinearColor NewColor) {
}

bool UPaperTileMapComponent::SetTileMap(UPaperTileMap* NewTileMap) {
    return false;
}

void UPaperTileMapComponent::SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue) {
}

void UPaperTileMapComponent::SetLayerColor(FLinearColor NewColor, int32 Layer) {
}

void UPaperTileMapComponent::SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision) {
}

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision) {
}

void UPaperTileMapComponent::ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles) {
}

void UPaperTileMapComponent::RebuildCollision() {
}

bool UPaperTileMapComponent::OwnsTileMap() const {
    return false;
}

void UPaperTileMapComponent::MakeTileMapEditable() {
}

void UPaperTileMapComponent::GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace) const {
}

FLinearColor UPaperTileMapComponent::GetTileMapColor() const {
    return FLinearColor{};
}

FVector UPaperTileMapComponent::GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const {
    return FVector{};
}

FVector UPaperTileMapComponent::GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const {
    return FVector{};
}

FPaperTileInfo UPaperTileMapComponent::GetTile(int32 X, int32 Y, int32 Layer) const {
    return FPaperTileInfo{};
}

void UPaperTileMapComponent::GetMapSize(int32& NewMapWidth, int32& NewMapHeight, int32& NumLayers) {
}

FLinearColor UPaperTileMapComponent::GetLayerColor(int32 Layer) const {
    return FLinearColor{};
}

void UPaperTileMapComponent::CreateNewTileMap(int32 NewMapWidth, int32 NewMapHeight, int32 NewTileWidth, int32 NewTileHeight, float PixelsPerUnrealUnit, bool bCreateLayer) {
}

UPaperTileLayer* UPaperTileMapComponent::AddNewLayer() {
    return NULL;
}


