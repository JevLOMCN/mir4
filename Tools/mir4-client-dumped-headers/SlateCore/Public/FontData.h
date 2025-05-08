#pragma once
#include "CoreMinimal.h"
#include "EFontHinting.h"
#include "EFontLoadingPolicy.h"
#include "FontData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FFontData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FontFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontHinting Hinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontLoadingPolicy LoadingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubFaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FontFaceAsset;
    
public:
    FFontData();
};

