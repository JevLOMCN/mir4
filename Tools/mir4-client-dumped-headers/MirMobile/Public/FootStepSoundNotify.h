#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EFootStepSoundType.h"
#include "FootStepSoundNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFootStepSoundNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootStepSoundType FootStepSoundType;
    
    UFootStepSoundNotify();

};

