#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MiniGame_BackgroundActor.generated.h"

class AMiniGame_ManagerActor;

UCLASS(Blueprintable)
class AMiniGame_BackgroundActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniGame_ManagerActor* m_MiniGameActor;
    
    AMiniGame_BackgroundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float ReadyBackgroundRemove_BP(int32 MaxRight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReadyBackgroundAdd_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBackgoundActor_BP();
    
};

