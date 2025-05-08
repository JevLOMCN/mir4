#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScaleBox -FallbackName=ScaleBox
//CROSS-MODULE INCLUDE V2: -ModuleName=WNGamePlugin -ObjectName=EPostureDeviceState -FallbackName=EPostureDeviceState
#include "MirScaleBox.generated.h"

class UWNAndroidDeviceState;

UCLASS(Blueprintable)
class MIRMOBILE_API UMirScaleBox : public UScaleBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fUserSpecifiedScaleOnFold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWNAndroidDeviceState* m_pDeviceStateListener;
    
public:
    UMirScaleBox();

    UFUNCTION()
    void OnChangedDeviceState(EPostureDeviceState eDeviceState);
    
};

