#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundBase -FallbackName=SoundBase
#include "SoundVariation.h"
#include "SoundSimple.generated.h"

class USoundWave;

UCLASS(Blueprintable, EditInlineNew)
class SOUNDUTILITIES_API USoundSimple : public USoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundVariation> Variations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
public:
    USoundSimple();

};

