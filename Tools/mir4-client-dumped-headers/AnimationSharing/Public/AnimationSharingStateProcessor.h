#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimationSharingStateProcessor.generated.h"

class AActor;
class UEnum;

UCLASS(Blueprintable)
class ANIMATIONSHARING_API UAnimationSharingStateProcessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnum> AnimationStateEnum;
    
    UAnimationSharingStateProcessor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessActorState(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UEnum* GetAnimationStateEnum();
    
};

