#pragma once
#include "CoreMinimal.h"
#include "ChildEventParam.generated.h"

class UFirebaseDataSnapshot;

USTRUCT(BlueprintType)
struct FChildEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFirebaseDataSnapshot* dataSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviousSiblingKey;
    
    EASYFIREBASE_API FChildEventParam();
};

