#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SkillVirtualStick.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SkillVirtualStick : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_pImg_Bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_pImg_Touch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_pImg_CenterPos;
    
    UMM_SkillVirtualStick();

};

