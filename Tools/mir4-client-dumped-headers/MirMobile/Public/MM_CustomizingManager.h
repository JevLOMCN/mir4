#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MM_CustomizingManager.generated.h"

class AMM_CustomizingPoseableMeshActor;

UCLASS(Blueprintable)
class UMM_CustomizingManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_CustomizingPoseableMeshActor* m_pPoseableMeshActor;
    
    UMM_CustomizingManager();

};

