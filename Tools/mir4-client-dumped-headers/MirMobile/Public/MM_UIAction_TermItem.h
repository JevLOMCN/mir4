#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_TermItem.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_TermItem : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisplayWarning_Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSGID_WARNNING_24HOUR;
    
public:
    UMM_UIAction_TermItem();

};

