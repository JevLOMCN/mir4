#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask_ClaimResource.generated.h"

class IGameplayTaskOwnerInterface;
class UGameplayTaskOwnerInterface;
class UGameplayTaskResource;
class UGameplayTask_ClaimResource;

UCLASS(Blueprintable)
class GAMEPLAYTASKS_API UGameplayTask_ClaimResource : public UGameplayTask {
    GENERATED_BODY()
public:
    UGameplayTask_ClaimResource();

    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TArray<TSubclassOf<UGameplayTaskResource>> ResourceClasses, const uint8 Priority, const FName TaskInstanceName);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<UGameplayTaskResource> ResourceClass, const uint8 Priority, const FName TaskInstanceName);
    
};

