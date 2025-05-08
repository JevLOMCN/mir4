#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "WriteAndFlushLeaderboardsDelegateDelegate.h"
#include "WriteAndFlushLeaderboards.generated.h"

class UWriteAndFlushLeaderboards;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UWriteAndFlushLeaderboards : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWriteAndFlushLeaderboardsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWriteAndFlushLeaderboardsDelegate OnFail;
    
    UWriteAndFlushLeaderboards();

    UFUNCTION(BlueprintCallable)
    static UWriteAndFlushLeaderboards* WriteAndFlushLeaderboards(int32 Score);
    
};

