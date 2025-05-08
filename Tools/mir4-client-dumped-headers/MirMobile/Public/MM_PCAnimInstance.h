#pragma once
#include "CoreMinimal.h"
#include "MM_CharacterBaseAnimInstance.h"
#include "MM_PCAnimInstance.generated.h"

class AMM_PC;

UCLASS(Blueprintable, NonTransient)
class UMM_PCAnimInstance : public UMM_CharacterBaseAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_PC* PC;
    
public:
    UMM_PCAnimInstance();

};

