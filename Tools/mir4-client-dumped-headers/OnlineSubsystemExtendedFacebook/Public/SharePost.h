#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EFacebookImageFormat.h"
#include "SharePostDelegateDelegate.h"
#include "SharePost.generated.h"

class USharePost;
class UTexture2D;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API USharePost : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharePostDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharePostDelegate OnFail;
    
    USharePost();

    UFUNCTION(BlueprintCallable)
    static USharePost* SharePost(const FString& Message, const TArray<FString>& TaggedFriends);
    
    UFUNCTION(BlueprintCallable)
    static USharePost* ShareImage(const FString& Message, const TArray<FString>& TaggedFriends, UTexture2D* Image, EFacebookImageFormat ImageFormat);
    
};

