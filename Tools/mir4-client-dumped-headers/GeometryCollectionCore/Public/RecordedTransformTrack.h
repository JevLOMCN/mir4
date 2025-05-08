#pragma once
#include "CoreMinimal.h"
#include "RecordedFrame.h"
#include "RecordedTransformTrack.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONCORE_API FRecordedTransformTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecordedFrame> Records;
    
    FRecordedTransformTrack();
};

