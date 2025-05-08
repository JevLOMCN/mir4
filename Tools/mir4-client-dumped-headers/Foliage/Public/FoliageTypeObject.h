#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoliageTypeObject.generated.h"

class UFoliageType;
class UFoliageType_InstancedStaticMesh;
class UObject;

USTRUCT(BlueprintType)
struct FOLIAGE_API FFoliageTypeObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FoliageTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFoliageType* TypeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFoliageType_InstancedStaticMesh> Type;
    
public:
    FFoliageTypeObject();
};

