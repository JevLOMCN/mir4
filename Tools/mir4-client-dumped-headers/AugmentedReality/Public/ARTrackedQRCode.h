#pragma once
#include "CoreMinimal.h"
#include "ARTrackedImage.h"
#include "ARTrackedQRCode.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARTrackedQRCode : public UARTrackedImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QRCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UARTrackedQRCode();

};

