#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemResult_SingleAbilityInfo.generated.h"

class UMirImage;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemResult_SingleAbilityInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_Before_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* RichTxt_Before_AbilityOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_After_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* RichTxt_After_AbilityOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_Arrow;
    
public:
    UMM_ItemResult_SingleAbilityInfo();

};

