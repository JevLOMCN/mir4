#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildIcon.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildIcon : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* img_frame;
    
public:
    UMM_GuildIcon();

};

