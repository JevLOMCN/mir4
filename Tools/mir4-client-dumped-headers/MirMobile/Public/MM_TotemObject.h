#pragma once
#include "CoreMinimal.h"
#include "MM_EntityBase.h"
#include "MM_TotemObject.generated.h"

class UMM_ExecuteDecalComponent;

UCLASS(Blueprintable)
class AMM_TotemObject : public AMM_EntityBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ExecuteDecalComponent* ExecuteDecalComponent;
    
public:
    AMM_TotemObject(const FObjectInitializer& ObjectInitializer);

};

