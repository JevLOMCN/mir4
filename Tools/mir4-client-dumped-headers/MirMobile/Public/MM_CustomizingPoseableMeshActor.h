#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MM_CustomizingPoseableMeshActor.generated.h"

class UPoseableMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AMM_CustomizingPoseableMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* m_pPoseableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pSkeletalMeshComponent;
    
    AMM_CustomizingPoseableMeshActor(const FObjectInitializer& ObjectInitializer);

};

