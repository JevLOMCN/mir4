#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeData.h"
#include "MeshElementAttributeList.generated.h"

USTRUCT(BlueprintType)
struct FMeshElementAttributeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshElementAttributeData> Attributes;
    
    EDITABLEMESH_API FMeshElementAttributeList();
};

