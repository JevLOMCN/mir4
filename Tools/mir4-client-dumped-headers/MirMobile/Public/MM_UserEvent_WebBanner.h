#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WidgetBase.h"
#include "MM_UserEvent_WebBanner.generated.h"

class UAsyncTaskDownloadImage;
class UImage;
class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UserEvent_WebBanner : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BannerSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Banner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskDownloadImage* mDownloadImage;
    
public:
    UMM_UserEvent_WebBanner();

    UFUNCTION(BlueprintCallable)
    void OnSuccessDownloadImage(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnFailDownloadImage(UTexture2DDynamic* Texture);
    
};

