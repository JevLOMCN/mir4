#pragma once
#include "CoreMinimal.h"
#include "CustomFieldData.generated.h"

USTRUCT(BlueprintType)
struct FCustomFieldData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    BUILDPATCHSERVICES_API FCustomFieldData();
};

