#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FacebookOpenGraphParameter.h"
#include "OpenGraphPostDelegateDelegate.h"
#include "OpenGraphPost.generated.h"

class UOpenGraphPost;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UOpenGraphPost : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenGraphPostDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenGraphPostDelegate OnFail;
    
    UOpenGraphPost();

    UFUNCTION(BlueprintCallable)
    static UOpenGraphPost* OpenGraphPost(const FString& GraphPath, const TArray<FFacebookOpenGraphParameter>& OpenGraphParameters, bool ShareOnTimeline);
    
};

