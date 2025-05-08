#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MovieSubtitleInfo.h"
#include "MovieSubtitleData.generated.h"

UCLASS(Blueprintable)
class UMovieSubtitleData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSubtitleInfo> SubtitleDataList;
    
    UMovieSubtitleData();

    UFUNCTION(BlueprintCallable)
    void Import_SrtSubtitle();
    
};

