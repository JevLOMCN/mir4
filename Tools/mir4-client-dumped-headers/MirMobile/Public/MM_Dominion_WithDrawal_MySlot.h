#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Dominion_WithDrawal_MySlot.generated.h"

class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dominion_WithDrawal_MySlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtValue;
    
public:
    UMM_Dominion_WithDrawal_MySlot();

};

