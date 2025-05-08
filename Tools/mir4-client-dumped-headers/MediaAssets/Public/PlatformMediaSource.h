#pragma once
#include "CoreMinimal.h"
#include "MediaSource.h"
#include "PlatformMediaSource.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAASSETS_API UPlatformMediaSource : public UMediaSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* MediaSource;
    
public:
    UPlatformMediaSource();

};

