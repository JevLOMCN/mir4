#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HiddenPathManagerActor.generated.h"

class AMyPortalTrigger;
class ASafetyArea;
class ATownAlarmTrigger;

UCLASS(Blueprintable)
class AHiddenPathManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMyPortalTrigger* m_pPortalTrigger1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMyPortalTrigger* m_pPortalTrigger2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATownAlarmTrigger* m_pTownAlarmTrigger1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASafetyArea*> m_pSafetyAreaArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HiddenPathType;
    
    AHiddenPathManagerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ExportSafeAreaJson();
    
};

