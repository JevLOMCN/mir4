#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "EClassType.h"
#include "EContentsSceneType.h"
#include "SceneCaptureLevelScriptActor.generated.h"

class AActor;
class AUIBackGroundActor;

UCLASS(Blueprintable)
class ASceneCaptureLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClassType CurrentClassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentsSceneType CurrentContentsSceneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BackGroundUILocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* BackGroundActor;
    
    ASceneCaptureLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCamera(int32 CameraType);
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void k2_Init(EClassType ClassType, EContentsSceneType ContentsSceneType, int32 CameraType);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

