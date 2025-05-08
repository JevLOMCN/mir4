#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TriggerInfoExtractor.generated.h"

UCLASS(Blueprintable)
class ATriggerInfoExtractor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTestStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDeleteTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FontScale;
    
    ATriggerInfoExtractor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveData();
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadCompleteDataEvent();
    
};

