#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "MovieSceneVectorKeyStructBase.h"
#include "MovieSceneVector4KeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector4KeyStruct();
};

