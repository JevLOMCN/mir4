#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "WriteAchievementDelegateDelegate.h"
#include "WriteAchievement.generated.h"

class UWriteAchievement;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UWriteAchievement : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWriteAchievementDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWriteAchievementDelegate OnFail;
    
    UWriteAchievement();

    UFUNCTION(BlueprintCallable)
    static UWriteAchievement* WriteAchievement(FName AchievementId);
    
};

