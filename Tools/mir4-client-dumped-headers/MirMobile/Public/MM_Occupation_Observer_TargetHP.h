#pragma once
#include "CoreMinimal.h"
#include "MM_ProgressBar_HP.h"
#include "MM_Occupation_Observer_TargetHP.generated.h"

class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Occupation_Observer_TargetHP : public UMM_ProgressBar_HP {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Icon;
    
public:
    UMM_Occupation_Observer_TargetHP();

};

