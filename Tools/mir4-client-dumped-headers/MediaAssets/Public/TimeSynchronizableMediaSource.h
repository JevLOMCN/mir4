#pragma once
#include "CoreMinimal.h"
#include "BaseMediaSource.h"
#include "TimeSynchronizableMediaSource.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MEDIAASSETS_API UTimeSynchronizableMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTimeSynchronization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeDelay;
    
    UTimeSynchronizableMediaSource();

};

