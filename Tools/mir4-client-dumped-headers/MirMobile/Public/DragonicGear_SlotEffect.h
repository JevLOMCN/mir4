#pragma once
#include "CoreMinimal.h"
#include "DragonicGear_SlotEffect.generated.h"

class UImage;
class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FDragonicGear_SlotEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Fx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_Fx;
    
    MIRMOBILE_API FDragonicGear_SlotEffect();
};

