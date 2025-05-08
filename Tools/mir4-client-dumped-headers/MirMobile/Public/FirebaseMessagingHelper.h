#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FirebaseMessagingHelper.generated.h"

UCLASS(Blueprintable)
class UFirebaseMessagingHelper : public UObject {
    GENERATED_BODY()
public:
    UFirebaseMessagingHelper();

    UFUNCTION(BlueprintCallable)
    void RecvFCMTokenComplete();
    
};

