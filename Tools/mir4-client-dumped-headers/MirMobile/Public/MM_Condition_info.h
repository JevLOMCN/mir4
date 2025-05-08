#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Condition_info.generated.h"

class UMirImage;
class UMirProgressBar;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Condition_info : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_AchieveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_AchieveDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_AchievBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_AchievePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Icon;
    
    UMM_Condition_info();

};

