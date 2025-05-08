#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "MM_AdManager.generated.h"

UCLASS(Blueprintable)
class UMM_AdManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle m_DelayHideBlockScreenTimeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle m_DelayRetryTimeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* AdObject;
    
public:
    UMM_AdManager();

    UFUNCTION(BlueprintCallable)
    void OnRewardedAdUserEarhedReward(const FString& RewardType, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnRewardedAdOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardedAdLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardedAdFailedToShow(int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnRewardedAdFailedToLoad(int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnRewardedAdClosed();
    
};

