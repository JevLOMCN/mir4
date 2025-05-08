#pragma once
#include "CoreMinimal.h"
#include "GameCenterFinishDelegateDelegate.generated.h"

class UFirebaseCredential;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameCenterFinishDelegate, UFirebaseCredential*, credential, int32, ErrorCode, const FString&, errmsg);

