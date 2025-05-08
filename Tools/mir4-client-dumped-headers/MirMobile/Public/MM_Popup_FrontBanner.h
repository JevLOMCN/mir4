#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_FrontBanner.generated.h"

class UAsyncTaskDownloadImage;
class UImage;
class UMM_Common_Btn_Symbol;
class UMirCheckBox;
class UMirTextBlock;
class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_FrontBanner : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mTxtStopToday;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* mCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* mImgDownLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* mBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskDownloadImage* mDownloadImage;
    
public:
    UMM_Popup_FrontBanner();

    UFUNCTION(BlueprintCallable)
    void OnSuccessDownloadImage(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnFailDownloadImage(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBox(bool Checked);
    
};

