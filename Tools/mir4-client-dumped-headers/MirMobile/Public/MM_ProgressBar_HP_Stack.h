#pragma once
#include "CoreMinimal.h"
#include "MM_ProgressBar_HP.h"
#include "PorgressColor.h"
#include "MM_ProgressBar_HP_Stack.generated.h"

class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ProgressBar_HP_Stack : public UMM_ProgressBar_HP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* TextBlock_StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPorgressColor> StackColor;
    
public:
    UMM_ProgressBar_HP_Stack();

};

