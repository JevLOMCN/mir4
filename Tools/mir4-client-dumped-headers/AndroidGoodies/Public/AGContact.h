#pragma once
#include "CoreMinimal.h"
#include "AGContact.generated.h"

USTRUCT(BlueprintType)
struct ANDROIDGOODIES_API FAGContact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Numbers;
    
    FAGContact();
};

