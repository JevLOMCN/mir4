#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FacebookShareLinkContent.h"
#include "ShareLinkContentDelegateDelegate.h"
#include "ShareLinkContent.generated.h"

class UShareLinkContent;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UShareLinkContent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShareLinkContentDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShareLinkContentDelegate OnFail;
    
    UShareLinkContent();

    UFUNCTION(BlueprintCallable)
    static UShareLinkContent* ShareLinkContent(const FFacebookShareLinkContent& ShareParameter);
    
};

