#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EHolyStuffAnimType.h"
#include "MM_HolyStuffAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMM_HolyStuffAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHolyStuffAnimType HolyStuffType;
    
    UMM_HolyStuffAnimInstance();

};

