#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Pet_Circle_Portrait.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Pet_Circle_Portrait : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_TierBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_PetIcon;
    
public:
    UMM_Pet_Circle_Portrait();

};

