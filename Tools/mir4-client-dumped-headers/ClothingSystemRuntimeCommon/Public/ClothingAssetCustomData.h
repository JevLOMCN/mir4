#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothingAssetCustomData.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UClothingAssetCustomData : public UObject {
    GENERATED_BODY()
public:
    UClothingAssetCustomData();

};

