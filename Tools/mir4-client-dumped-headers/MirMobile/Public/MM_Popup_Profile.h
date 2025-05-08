#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Profile.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_ProfileImageEditor;
class UMM_ProfileSlot;
class UMirImage;
class UTexture2D;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Profile : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ProfileSlot* MyProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ProfileImageEditor* m_ProfileImageEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_ProfileSlot*> m_IconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_IconListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_ApplyBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_AddProfileImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_SelectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CloseBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pProfileTexture;
    
public:
    UMM_Popup_Profile();

    UFUNCTION(BlueprintCallable)
    void UploadProfileImageResult(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUploadingBlockScreen(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetUserProfileImage(UTexture2D* pProfileTexture);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickApply();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAddProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetIOSGalleryImageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDevicePhotoImageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAndroidGalleryImageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMM_ProfileSlot*> CreateIcon(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void AddDeviceProfileImage(UTexture2D* pPhotoTexture, const FString& FailMessage);
    
};

