#pragma once
#include "CoreMinimal.h"
#include "ButtonStyle.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "TextBlockStyle.h"
#include "HyperlinkStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FHyperlinkStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle UnderlineStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    FHyperlinkStyle();
};

