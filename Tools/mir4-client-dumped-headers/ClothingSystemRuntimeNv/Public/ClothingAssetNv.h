#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothingAssetCommon -FallbackName=ClothingAssetCommon
#include "ClothConfig.h"
#include "ClothLODData.h"
#include "ClothingAssetNv.generated.h"

UCLASS(Blueprintable)
class CLOTHINGSYSTEMRUNTIMENV_API UClothingAssetNv : public UClothingAssetCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConfig ClothConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothLODData> LODData;
    
    UClothingAssetNv();

};

