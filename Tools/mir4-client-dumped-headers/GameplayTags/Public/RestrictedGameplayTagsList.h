#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RestrictedGameplayTagTableRow.h"
#include "RestrictedGameplayTagsList.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=GameplayTags)
class GAMEPLAYTAGS_API URestrictedGameplayTagsList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;
    
    URestrictedGameplayTagsList();

};

