#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_PopupPackage.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_PopupPackage : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSGID_COSTMAX;
    
public:
    UMM_UIAction_PopupPackage();

};

