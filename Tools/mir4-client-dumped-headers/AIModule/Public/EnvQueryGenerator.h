#pragma once
#include "CoreMinimal.h"
#include "EnvQueryNode.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.generated.h"

class UEnvQueryItemType;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator : public UEnvQueryNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoSortTests: 1;
    
    UEnvQueryGenerator();

};

