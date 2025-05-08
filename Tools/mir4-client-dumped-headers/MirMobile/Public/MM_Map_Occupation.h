#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_Occupation.generated.h"

class UImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_Occupation : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Symbol;
    
public:
    UMM_Map_Occupation();

};

