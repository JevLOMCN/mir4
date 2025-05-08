#pragma once
#include "CoreMinimal.h"
#include "EditableMeshAdapter.h"
#include "EditableStaticMeshAdapter.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* OriginalStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaticMeshLODIndex;
    
public:
    UEditableStaticMeshAdapter();

};

