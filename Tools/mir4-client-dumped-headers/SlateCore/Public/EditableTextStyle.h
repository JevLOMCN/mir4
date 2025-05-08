#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateFontInfo.h"
#include "SlateWidgetStyle.h"
#include "EditableTextStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FEditableTextStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundImageSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundImageComposing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CaretImage;
    
    FEditableTextStyle();
};

