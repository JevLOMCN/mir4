#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MediaSoundActor.generated.h"

class UMediaSoundComponent;

UCLASS(Blueprintable)
class AMediaSoundActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* m_pMediaSoundComponent;
    
    AMediaSoundActor(const FObjectInitializer& ObjectInitializer);

};

