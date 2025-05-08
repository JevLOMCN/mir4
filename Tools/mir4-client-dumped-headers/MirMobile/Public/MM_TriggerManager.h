#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MM_TriggerManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class AMM_TriggerManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TestTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pTriggerTable;
    
    AMM_TriggerManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitTriggerManager(int32 TriggerGroupID);
    
};

