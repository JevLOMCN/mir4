#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "ProceduralFoliageVolume.generated.h"

class UProceduralFoliageComponent;

UCLASS(Blueprintable)
class FOLIAGE_API AProceduralFoliageVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralFoliageComponent* ProceduralComponent;
    
    AProceduralFoliageVolume(const FObjectInitializer& ObjectInitializer);

};

