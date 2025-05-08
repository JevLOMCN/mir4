#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PaperTerrainMaterialRule.h"
#include "PaperTerrainMaterial.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class PAPER2D_API UPaperTerrainMaterial : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPaperTerrainMaterialRule> Rules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* InteriorFill;
    
    UPaperTerrainMaterial();

};

