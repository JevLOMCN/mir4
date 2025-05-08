#pragma once
#include "CoreMinimal.h"
#include "MM_ObjectBase.h"
#include "MM_SparringObject.generated.h"

class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class AMM_SparringObject : public AMM_ObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_RingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SparringRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SparringWarningRange;
    
    AMM_SparringObject(const FObjectInitializer& ObjectInitializer);

};

