#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PetStatSlot.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PetStatSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_StatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_StatValue;
    
public:
    UMM_PetStatSlot();

};

