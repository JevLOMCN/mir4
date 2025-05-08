#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkeletalEffect.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASkeletalEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pSkelMesh;
    
    ASkeletalEffect(const FObjectInitializer& ObjectInitializer);

};

