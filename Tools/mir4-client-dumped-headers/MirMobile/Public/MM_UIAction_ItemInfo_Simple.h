#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_ItemInfo_Simple.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_ItemInfo_Simple : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CONTENTS_ID_POPUP;
    
public:
    UMM_UIAction_ItemInfo_Simple();

};

