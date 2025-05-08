#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpeechBalloonUI.generated.h"

class AMM_CharacterPawnBase;
class USkeletalMeshComponent;
class USpeechBalloonWidget;

UCLASS(Blueprintable)
class ASpeechBalloonUI : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpeechBalloonWidget* m_pSpeechBalloonWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pTargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_CharacterPawnBase* m_pTarget;
    
public:
    ASpeechBalloonUI(const FObjectInitializer& ObjectInitializer);

};

