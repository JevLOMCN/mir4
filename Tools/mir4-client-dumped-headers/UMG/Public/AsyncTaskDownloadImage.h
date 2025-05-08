#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DownloadImageDelegateDelegate.h"
#include "AsyncTaskDownloadImage.generated.h"

class UAsyncTaskDownloadImage;

UCLASS(Blueprintable)
class UMG_API UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadImageDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadImageDelegate OnFail;
    
    UAsyncTaskDownloadImage();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskDownloadImage* DownloadImage(const FString& URL);
    
};

