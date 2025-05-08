#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FacebookSharePhotoContent.h"
#include "SharePhotoContentDelegateDelegate.h"
#include "SharePhotoContent.generated.h"

class USharePhotoContent;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API USharePhotoContent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharePhotoContentDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharePhotoContentDelegate OnFail;
    
    USharePhotoContent();

    UFUNCTION(BlueprintCallable)
    static USharePhotoContent* SharePhotoContent(const FFacebookSharePhotoContent& ShareParameter);
    
};

