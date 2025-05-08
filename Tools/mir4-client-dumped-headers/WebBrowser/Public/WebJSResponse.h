#pragma once
#include "CoreMinimal.h"
#include "WebJSCallbackBase.h"
#include "WebJSResponse.generated.h"

USTRUCT(BlueprintType)
struct WEBBROWSER_API FWebJSResponse : public FWebJSCallbackBase {
    GENERATED_BODY()
public:
    FWebJSResponse();
};

