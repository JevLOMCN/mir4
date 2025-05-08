#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ShortCutKeySlot.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_ShortCutKeySlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_key;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName default_key;
    
    UMM_ShortCutKeySlot();

};

