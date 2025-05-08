#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "QuestStatusCheckTrigger.generated.h"

UCLASS(Blueprintable)
class AQuestStatusCheckTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SubQuestIndex;
    
    AQuestStatusCheckTrigger(const FObjectInitializer& ObjectInitializer);

};

