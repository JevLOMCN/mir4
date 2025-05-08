#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
#include "MeshElementAttributeList.h"
#include "AttributesForVertexInstance.generated.h"

USTRUCT(BlueprintType)
struct FAttributesForVertexInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexInstanceID VertexInstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList VertexInstanceAttributes;
    
    EDITABLEMESH_API FAttributesForVertexInstance();
};

