#pragma once
#include "CoreMinimal.h"
#include "CharacterPartsMID.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FCharacterPartsMID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDArray;
    
    MIRMOBILE_API FCharacterPartsMID();
};

