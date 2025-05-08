#pragma once
#include "CoreMinimal.h"
#include "CutsceneActor.h"
#include "PlayerCutsceneActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class APlayerCutsceneActor : public ACutsceneActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_pWeaponMeshComponent01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_pWeaponMeshComponent02;
    
public:
    APlayerCutsceneActor(const FObjectInitializer& ObjectInitializer);

};

