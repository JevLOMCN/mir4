#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "MM_PlayerController.generated.h"

class AMM_MainPC;

UCLASS(Blueprintable)
class AMM_PlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MouseWheelValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_MainPC* PC;
    
public:
    AMM_PlayerController(const FObjectInitializer& ObjectInitializer);

};

