#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpawnObjectInfoExporter.generated.h"

UCLASS(Blueprintable)
class ASpawnObjectInfoExporter : public AActor {
    GENERATED_BODY()
public:
    ASpawnObjectInfoExporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveData();
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
};

