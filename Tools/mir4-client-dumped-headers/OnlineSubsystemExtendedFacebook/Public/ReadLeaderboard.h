#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ReadLeaderboardDelegateDelegate.h"
#include "ReadLeaderboard.generated.h"

class UReadLeaderboard;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UReadLeaderboard : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadLeaderboardDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadLeaderboardDelegate OnFail;
    
    UReadLeaderboard();

    UFUNCTION(BlueprintCallable)
    static UReadLeaderboard* ReadLeaderboard(bool ReadOnlyMe);
    
};

