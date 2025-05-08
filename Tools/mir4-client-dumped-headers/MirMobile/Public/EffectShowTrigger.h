#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "EffectShowTrigger.generated.h"

class UObject;

UCLASS(Blueprintable)
class AEffectShowTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EffectID;
    
    AEffectShowTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnEffectComponent(UObject* pEffectObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEffectComponent(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetEffectSystem(const FString& strPath);
    
};

