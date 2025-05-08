#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UserEvent_Goal.generated.h"

class UMM_UserEvent_WebBanner;
class UMirImage;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UserEvent_Goal : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Thumb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_WebBanner* m_WebBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
public:
    UMM_UserEvent_Goal();

};

