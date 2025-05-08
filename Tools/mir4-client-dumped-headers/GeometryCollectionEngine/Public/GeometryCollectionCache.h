#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCollectionCore -ObjectName=RecordedTransformTrack -FallbackName=RecordedTransformTrack
#include "GeometryCollectionCache.generated.h"

class UGeometryCollection;

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordedTransformTrack RecordedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* SupportedCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CompatibleCollectionState;
    
public:
    UGeometryCollectionCache();

};

