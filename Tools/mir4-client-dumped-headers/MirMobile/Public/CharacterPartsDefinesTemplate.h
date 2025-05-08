#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "CharacterPartsDefinesTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FCharacterPartsDefinesTemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PartsIndex;
    
    FCharacterPartsDefinesTemplate();
};

