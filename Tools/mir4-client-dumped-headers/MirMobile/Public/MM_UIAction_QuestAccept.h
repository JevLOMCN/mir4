#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_QuestAccept.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_QuestAccept : public UMM_UIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DoNotAcceptableRequestToStr;
    
    UMM_UIAction_QuestAccept();

};

