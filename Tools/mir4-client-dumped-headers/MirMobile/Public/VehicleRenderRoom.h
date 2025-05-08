#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VehicleRenderRoom.generated.h"

class AUIBackGroundActor;
class UMM_VehicleAnimInstance;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AVehicleRenderRoom : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_VehicleAnimInstance* m_pVehicleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* m_pUIBackGroundActor;
    
public:
    AVehicleRenderRoom(const FObjectInitializer& ObjectInitializer);

};

