#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DownloadProfileImagData.h"
#include "HttpImageManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UHttpImageManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_mapProfileKeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> m_mapProfileImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FDownloadProfileImagData> m_mapReserveUImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pPhotoTexture;
    
    UHttpImageManager();

    UFUNCTION(BlueprintCallable)
    void DownloadImage();
    
};

