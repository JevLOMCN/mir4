#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Mastery_Left.generated.h"

class UMM_Mastery_Slot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Mastery_Left : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Mastery_Slot*> m_arMasterySlot;
    
public:
    UMM_Mastery_Left();

};

