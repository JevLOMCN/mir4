#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "MirProgressBar.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMirProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UMirProgressBar();

};

