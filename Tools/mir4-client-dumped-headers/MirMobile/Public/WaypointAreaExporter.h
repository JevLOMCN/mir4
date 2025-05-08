#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WaypointAreaExporter.generated.h"

UCLASS(Blueprintable)
class AWaypointAreaExporter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strStageIDList;
    
    AWaypointAreaExporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnAutoWaypoint();
    
    UFUNCTION(BlueprintCallable)
    void SaveWaypointData();
    
    UFUNCTION(BlueprintCallable)
    void LoadWaypointData();
    
};

