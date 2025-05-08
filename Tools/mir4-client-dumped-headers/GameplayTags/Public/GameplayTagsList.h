#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagTableRow.h"
#include "GameplayTagsList.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=GameplayTagsList)
class GAMEPLAYTAGS_API UGameplayTagsList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagTableRow> GameplayTagList;
    
    UGameplayTagsList();

};

