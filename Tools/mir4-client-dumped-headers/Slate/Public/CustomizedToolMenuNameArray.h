#pragma once
#include "CoreMinimal.h"
#include "CustomizedToolMenuNameArray.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedToolMenuNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Names;
    
    SLATE_API FCustomizedToolMenuNameArray();
};

