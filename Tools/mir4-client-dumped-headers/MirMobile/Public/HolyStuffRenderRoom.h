#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EHolyStuffAnimType.h"
#include "HolyStuffRenderRoom.generated.h"

class AUIBackGroundActor;
class UMM_HolyStuffAnimInstance;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AHolyStuffRenderRoom : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_HolyStuffAnimInstance* m_pHolyStuffAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* m_pUIBackGroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHolyStuffAnimType m_eAnimType;
    
public:
    AHolyStuffRenderRoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ClearAniType();
    
};

