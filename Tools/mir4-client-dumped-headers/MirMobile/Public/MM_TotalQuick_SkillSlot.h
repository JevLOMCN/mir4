#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_TotalQuick_SkillSlot.generated.h"

class UButton;
class UCanvasPanel;
class UImage;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_TotalQuick_SkillSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgSkillIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_pImgSlotDirBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCan_AutoSetOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCan_AutoSetOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgBookmarkOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgBookmarkOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pBtnClick;
    
public:
    UMM_TotalQuick_SkillSlot();

    UFUNCTION(BlueprintCallable)
    void OnReleaseSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlot();
    
};

