#pragma once
#include "CoreMinimal.h"
#include "AGNotificationDefaults.generated.h"

USTRUCT(BlueprintType)
struct ANDROIDGOODIES_API FAGNotificationDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Lights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Vibrate;
    
    FAGNotificationDefaults();
};

