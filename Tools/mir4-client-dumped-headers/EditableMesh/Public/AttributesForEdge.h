#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=EdgeID -FallbackName=EdgeID
#include "MeshElementAttributeList.h"
#include "AttributesForEdge.generated.h"

USTRUCT(BlueprintType)
struct FAttributesForEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEdgeID EdgeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList EdgeAttributes;
    
    EDITABLEMESH_API FAttributesForEdge();
};

