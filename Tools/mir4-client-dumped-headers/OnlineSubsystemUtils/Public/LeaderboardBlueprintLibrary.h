#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LeaderboardBlueprintLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMUTILS_API ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULeaderboardBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32 StatValue);
    
};

