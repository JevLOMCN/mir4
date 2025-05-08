#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CutsceneActorAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class UCutsceneActorAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_HeadRotation;
    
    UCutsceneActorAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetTest02Anim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetTest01Anim();
    
};

