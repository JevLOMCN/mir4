#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AvfMediaSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class AVFMEDIAFACTORY_API UAvfMediaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NativeAudioOut;
    
    UAvfMediaSettings();

};

