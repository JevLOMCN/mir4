#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ProfileImageEditor.generated.h"

class UMM_Common_Btn;
class UMM_Popup_Profile;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ProfileImageEditor : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pPhotoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_Profile* m_pParentProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_BtnOk;
    
    UMM_ProfileImageEditor();

    UFUNCTION(BlueprintCallable)
    void SetPhotoTexture(UTexture2D* pPhotoTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBrushTextureEvent(UTexture2D* pPhotoTexture);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmPhotoImage();
    
};

