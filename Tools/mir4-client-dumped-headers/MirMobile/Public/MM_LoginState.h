#pragma once
#include "CoreMinimal.h"
#include "MM_GameStateBase.h"
#include "MM_LoginState.generated.h"

class APatchActor;

UCLASS(Blueprintable)
class AMM_LoginState : public AMM_GameStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APatchActor* m_PatchActor;
    
public:
    AMM_LoginState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnClickClose_MaintenanceWebpage();
    
private:
    UFUNCTION(BlueprintCallable)
    void AcquireAndroidPermission();
    
};

