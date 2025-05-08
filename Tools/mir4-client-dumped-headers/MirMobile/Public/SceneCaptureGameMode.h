#pragma once
#include "CoreMinimal.h"
#include "MM_PreviewModeBase.h"
#include "SceneCaptureGameMode.generated.h"

class AUIBackGroundActor;

UCLASS(Blueprintable, NonTransient)
class ASceneCaptureGameMode : public AMM_PreviewModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* BackGroundActor;
    
    ASceneCaptureGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ChangeCharacter(int32 ClassID);
    
    UFUNCTION(BlueprintCallable)
    void BeginTestGameMode(int32 ClassID);
    
};

