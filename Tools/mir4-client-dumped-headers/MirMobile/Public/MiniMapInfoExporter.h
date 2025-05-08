#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MiniMapInfoExporter.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class AMiniMapInfoExporter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StageID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pMonsterTemplate;
    
public:
    AMiniMapInfoExporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnDefaultMiniMapData();
    
    UFUNCTION(BlueprintCallable)
    void SaveMiniMapData();
    
    UFUNCTION(BlueprintCallable)
    void LoadMiniMapData();
    
};

