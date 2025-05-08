#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
#include "MeshElementAttributeList.h"
#include "PolygonGroupToCreate.generated.h"

USTRUCT(BlueprintType)
struct FPolygonGroupToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList PolygonGroupAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolygonGroupID OriginalPolygonGroupID;
    
    EDITABLEMESH_API FPolygonGroupToCreate();
};

