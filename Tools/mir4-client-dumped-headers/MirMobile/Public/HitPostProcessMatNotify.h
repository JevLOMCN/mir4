#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "HitPostProcessMaterialData.h"
#include "HitPostProcessMatNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHitPostProcessMatNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPostProcessMaterialData HitPostProcessData;
    
    UHitPostProcessMatNotify();

};

