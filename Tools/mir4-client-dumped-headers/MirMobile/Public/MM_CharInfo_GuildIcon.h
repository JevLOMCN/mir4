#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharInfo_GuildIcon.generated.h"

class UMM_Common_Btn_Symbol;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharInfo_GuildIcon : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_BtnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn;
    
public:
    UMM_CharInfo_GuildIcon();

};

