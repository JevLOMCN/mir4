#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WebBrowserAssetManager.generated.h"

class UMaterial;

UCLASS(Blueprintable)
class WEBBROWSERWIDGET_API UWebBrowserAssetManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> DefaultMaterial;
    
public:
    UWebBrowserAssetManager();

};

