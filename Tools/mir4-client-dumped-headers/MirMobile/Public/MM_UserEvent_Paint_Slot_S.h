#pragma once
#include "CoreMinimal.h"
#include "MM_UserEvent_Paint_Slot.h"
#include "MM_UserEvent_Paint_Slot_S.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UserEvent_Paint_Slot_S : public UMM_UserEvent_Paint_Slot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Check;
    
public:
    UMM_UserEvent_Paint_Slot_S();

};

