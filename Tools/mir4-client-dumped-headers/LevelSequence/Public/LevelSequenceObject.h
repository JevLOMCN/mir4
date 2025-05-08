#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FLevelSequenceObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<UObject> ObjectOrOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> CachedComponent;
    
public:
    LEVELSEQUENCE_API FLevelSequenceObject();
};

