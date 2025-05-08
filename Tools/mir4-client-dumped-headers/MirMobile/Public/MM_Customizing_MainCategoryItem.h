#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_MainCategoryItem.generated.h"

class UMirButton;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_MainCategoryItem : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pMainCategoryImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pMainSelectImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_MainCategorySelectBtn;
    
    UMM_Customizing_MainCategoryItem();

    UFUNCTION(BlueprintCallable)
    void OnSelectEffect(int32 CategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainCategoryBtn();
    
};

