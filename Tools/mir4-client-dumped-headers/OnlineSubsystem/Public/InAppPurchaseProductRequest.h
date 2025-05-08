#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductRequest.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseProductRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConsumable;
    
    ONLINESUBSYSTEM_API FInAppPurchaseProductRequest();
};

