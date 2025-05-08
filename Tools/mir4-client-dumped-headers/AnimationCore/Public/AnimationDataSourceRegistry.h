#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimationDataSourceRegistry.generated.h"

UCLASS(Blueprintable)
class ANIMATIONCORE_API UAnimationDataSourceRegistry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> DataSources;
    
public:
    UAnimationDataSourceRegistry();

};

