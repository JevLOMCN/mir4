#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BlueprintAsyncLoadDelegateDelegate.h"
#include "MM_BlueprintAsyncLoadAction.generated.h"

class UMM_BlueprintAsyncLoadAction;
class UObject;

UCLASS(Blueprintable)
class UMM_BlueprintAsyncLoadAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintAsyncLoadDelegate AsyncLoadComplete;
    
    UMM_BlueprintAsyncLoadAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMM_BlueprintAsyncLoadAction* MMAsyncPackageLoad(UObject* WorldContextObject, const FString& AssetPath);
    
};

