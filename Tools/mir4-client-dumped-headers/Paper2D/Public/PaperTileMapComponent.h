#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "PaperTileInfo.h"
#include "PaperTileMapComponent.generated.h"

class UMaterialInterface;
class UPaperTileLayer;
class UPaperTileMap;
class UPaperTileSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperTileMapComponent : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTileSet* DefaultLayerTileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPaperTileLayer*> TileLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TileMapColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseSingleLayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSingleLayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTileMap* TileMap;
    
    UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTileMapColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    bool SetTileMap(UPaperTileMap* NewTileMap);
    
    UFUNCTION(BlueprintCallable)
    void SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerColor(FLinearColor NewColor, int32 Layer);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
    
    UFUNCTION(BlueprintCallable)
    void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
    
    UFUNCTION(BlueprintCallable)
    void RebuildCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnsTileMap() const;
    
    UFUNCTION(BlueprintCallable)
    void MakeTileMapEditable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetTileMapColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMapSize(int32& NewMapWidth, int32& NewMapHeight, int32& NumLayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLayerColor(int32 Layer) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateNewTileMap(int32 NewMapWidth, int32 NewMapHeight, int32 NewTileWidth, int32 NewTileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
    
    UFUNCTION(BlueprintCallable)
    UPaperTileLayer* AddNewLayer();
    
};

