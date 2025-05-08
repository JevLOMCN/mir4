#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SmallTalkWidget.generated.h"

class UButton;
class UMaterialInstanceDynamic;
class UMirImage;
class UMirRichTextBlock;
class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USmallTalkWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pText_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_pText_Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImage_Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_pBtn_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pAnim_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pAnim_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_pPlayerPortraitMID;
    
    USmallTalkWidget();

    UFUNCTION(BlueprintCallable)
    void OnCloseSmalltalk();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSkipButton();
    
};

