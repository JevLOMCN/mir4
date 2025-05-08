#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildMemberPortrait.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildMemberPortrait : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* img_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* img_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* img_expedition;
    
public:
    UMM_GuildMemberPortrait();

};

