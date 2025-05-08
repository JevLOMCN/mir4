#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextFlowDirection -FallbackName=ETextFlowDirection
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextShapingMethod -FallbackName=ETextShapingMethod
#include "ShapedTextOptions.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FShapedTextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_TextShapingMethod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_TextFlowDirection: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextShapingMethod TextShapingMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextFlowDirection TextFlowDirection;
    
    FShapedTextOptions();
};

