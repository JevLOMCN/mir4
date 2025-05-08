#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_DragonicGear.generated.h"

class AMM_DragonicGearManagerActor;

UCLASS(Blueprintable)
class UMM_UIAction_DragonicGear : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_DragonicGearManagerActor* m_ManagerActor;
    
public:
    UMM_UIAction_DragonicGear();

};

