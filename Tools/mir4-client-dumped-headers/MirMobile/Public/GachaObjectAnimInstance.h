#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "GachaObjectAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGachaObjectAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bImmediate;
    
    UGachaObjectAnimInstance();

    UFUNCTION(BlueprintCallable)
    void GachaOpenAnimEnd();
    
};

