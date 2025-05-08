#pragma once
#include "CoreMinimal.h"
#include "MediaSource.h"
#include "BaseMediaSource.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MEDIAASSETS_API UBaseMediaSource : public UMediaSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PlayerName;
    
public:
    UBaseMediaSource();

};

