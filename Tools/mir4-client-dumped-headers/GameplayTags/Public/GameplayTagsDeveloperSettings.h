#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagsDeveloperSettings.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=GameplayTags)
class GAMEPLAYTAGS_API UGameplayTagsDeveloperSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeveloperConfigName;
    
    UGameplayTagsDeveloperSettings();

};

