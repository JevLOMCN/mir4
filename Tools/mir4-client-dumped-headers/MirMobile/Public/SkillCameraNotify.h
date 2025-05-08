#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SkillCameraValue.h"
#include "SkillCameraNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USkillCameraNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillCameraValue SkillCameraValue;
    
    USkillCameraNotify();

};

