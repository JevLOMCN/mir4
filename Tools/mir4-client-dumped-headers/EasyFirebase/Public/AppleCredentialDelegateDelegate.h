#pragma once
#include "CoreMinimal.h"
#include "AppleCredentialDelegateDelegate.generated.h"

class UFirebaseCredential;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAppleCredentialDelegate, bool, IsSuccess, UFirebaseCredential*, credential, const FString&, errmsg);

