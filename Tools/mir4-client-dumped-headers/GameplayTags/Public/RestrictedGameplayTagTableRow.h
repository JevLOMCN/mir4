#pragma once
#include "CoreMinimal.h"
#include "GameplayTagTableRow.h"
#include "RestrictedGameplayTagTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNonRestrictedChildren;
    
    GAMEPLAYTAGS_API FRestrictedGameplayTagTableRow();
};

