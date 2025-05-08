#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Guild_Icon.generated.h"

class UButton;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Guild_Icon : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Main;
    
public:
    UMM_Guild_Icon();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

