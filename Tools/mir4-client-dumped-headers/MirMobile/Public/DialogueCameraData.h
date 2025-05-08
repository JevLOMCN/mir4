#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ActorPlacement.h"
#include "DialogueCameraData.generated.h"

UCLASS(Blueprintable)
class UDialogueCameraData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorPlacement> CameraDataArray;
    
    UDialogueCameraData();

};

