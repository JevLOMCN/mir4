#pragma once
#include "CoreMinimal.h"
#include "EditableMeshAdapter.h"
#include "EditableGeometryCollectionAdapter.generated.h"

class UGeometryCollection;

UCLASS(Blueprintable, MinimalAPI)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* GeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* OriginalGeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeometryCollectionLODIndex;
    
public:
    UEditableGeometryCollectionAdapter();

};

