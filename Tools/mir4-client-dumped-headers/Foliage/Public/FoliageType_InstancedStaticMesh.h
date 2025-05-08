#pragma once
#include "CoreMinimal.h"
#include "FoliageType.h"
#include "Templates/SubclassOf.h"
#include "FoliageType_InstancedStaticMesh.generated.h"

class UFoliageInstancedStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFoliageType_InstancedStaticMesh : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFoliageInstancedStaticMeshComponent> ComponentClass;
    
    UFoliageType_InstancedStaticMesh();

};

