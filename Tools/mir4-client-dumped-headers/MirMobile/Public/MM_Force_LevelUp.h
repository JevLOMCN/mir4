#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Force_LevelUp.generated.h"

class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Force_LevelUp : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Description;
    
public:
    UMM_Force_LevelUp();

};

