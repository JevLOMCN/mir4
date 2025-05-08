#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
#include "VertexIndexAndInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FVertexIndexAndInstanceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContourIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexInstanceID VertexInstanceID;
    
    EDITABLEMESH_API FVertexIndexAndInstanceID();
};

