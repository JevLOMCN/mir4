#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CommonUIBackGround.generated.h"

UCLASS(Blueprintable)
class ACommonUIBackGround : public AActor {
    GENERATED_BODY()
public:
    ACommonUIBackGround(const FObjectInitializer& ObjectInitializer);

};

