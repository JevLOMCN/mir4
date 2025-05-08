#pragma once
#include "CoreMinimal.h"
#include "FacebookCredentialDelegateDelegate.generated.h"

class UFirebaseCredential;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFacebookCredentialDelegate, bool, IsSuccess, UFirebaseCredential*, credential);

