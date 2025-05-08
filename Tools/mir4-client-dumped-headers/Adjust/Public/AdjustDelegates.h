#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OnAttributionChangedDelegateDelegate.h"
#include "OnAuthorizationStatusDelegateDelegate.h"
#include "OnDeferredDeeplinkDelegateDelegate.h"
#include "OnEventFailureDelegateDelegate.h"
#include "OnEventSuccessDelegateDelegate.h"
#include "OnGoogleAdvertisingIdDelegateDelegate.h"
#include "OnSessionFailureDelegateDelegate.h"
#include "OnSessionSuccessDelegateDelegate.h"
#include "AdjustDelegates.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ADJUST_API UAdjustDelegates : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributionChangedDelegate OnAttributionChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSuccessDelegate OnSessionSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionFailureDelegate OnSessionFailureDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventSuccessDelegate OnEventSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventFailureDelegate OnEventFailureDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeferredDeeplinkDelegate OnDeferredDeeplinkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoogleAdvertisingIdDelegate OnGoogleAdvertisingIdDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthorizationStatusDelegate OnAuthorizationStatusDelegate;
    
    UAdjustDelegates(const FObjectInitializer& ObjectInitializer);

};

