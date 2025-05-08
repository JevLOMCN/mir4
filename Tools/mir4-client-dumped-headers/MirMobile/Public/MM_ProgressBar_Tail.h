#pragma once
#include "CoreMinimal.h"
#include "PorgressColor.h"
#include "WidgetBase.h"
#include "MM_ProgressBar_Tail.generated.h"

class UMirImage;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ProgressBar_Tail : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Image_BG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Tail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPorgressColor DefaultColor;
    
public:
    UMM_ProgressBar_Tail();

};

