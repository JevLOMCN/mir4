#pragma once
#include "CoreMinimal.h"
#include "GogoleCredentialDelegateDelegate.generated.h"

class UFirebaseCredential;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGogoleCredentialDelegate, bool, IsSuccess, UFirebaseCredential*, credential);

