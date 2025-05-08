#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SiegeBuildingEffectData.generated.h"

UCLASS(Blueprintable)
class USiegeBuildingEffectData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SiegeType;
    
    USiegeBuildingEffectData();

};

