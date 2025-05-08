#pragma once
#include "CoreMinimal.h"
#include "WebJSCallbackBase.h"
#include "WebJSFunction.generated.h"

USTRUCT(BlueprintType)
struct WEBBROWSER_API FWebJSFunction : public FWebJSCallbackBase {
    GENERATED_BODY()
public:
    FWebJSFunction();
};

