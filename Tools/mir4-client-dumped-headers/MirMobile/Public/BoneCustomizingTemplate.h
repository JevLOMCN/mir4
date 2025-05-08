#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "CustomBoneData.h"
#include "BoneCustomizingTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FBoneCustomizingTemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomBoneData> BoneDataArray;
    
    FBoneCustomizingTemplate();
};

