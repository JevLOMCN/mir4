#pragma once
#include "CoreMinimal.h"
#include "FirebaseSignInResult.h"
#include "SignInResultFinishDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSignInResultFinishDelegate, FFirebaseSignInResult, SignInResult, int32, ErrorCode, const FString&, errmsg);

