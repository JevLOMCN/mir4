#pragma once
#include "CoreMinimal.h"
#include "FontData.h"
#include "TypefaceEntry.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTypefaceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFontData Font;
    
    FTypefaceEntry();
};

