#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MiniMapNaviDataExporter.generated.h"

UCLASS(Blueprintable)
class AMiniMapNaviDataExporter : public AActor {
    GENERATED_BODY()
public:
    AMiniMapNaviDataExporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLevelName();
    
    UFUNCTION(BlueprintCallable)
    void ExportJsonData(FVector StartPoint, int32 TileSize, int32 TileLineCount, TArray<bool> NaviTileArray);
    
};

