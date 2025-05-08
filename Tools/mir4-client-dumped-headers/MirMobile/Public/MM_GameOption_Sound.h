#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_Sound.generated.h"

class UMM_GameOption_Slider;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_Sound : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_Master;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* Option_Ambient;
    
public:
    UMM_GameOption_Sound();

};

