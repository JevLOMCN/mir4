#pragma once
#include "CoreMinimal.h"
#include "BaseMediaSource.h"
#include "FileMediaSource.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAASSETS_API UFileMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrecacheFile;
    
    UFileMediaSource();

    UFUNCTION(BlueprintCallable)
    void SetFilePath(const FString& Path);
    
};

