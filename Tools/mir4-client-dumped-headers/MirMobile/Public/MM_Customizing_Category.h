#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_Category.generated.h"

class UMM_Customizing_MainCategoryItem;
class UMM_Customizing_TextCategory;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Category : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_MainCategoryItem*> m_TopCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_MainCategoryItem*> m_MainCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Customizing_TextCategory*> m_SubCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrSubCategory;
    
    UMM_Customizing_Category();

    UFUNCTION(BlueprintCallable)
    void OnClickTopCategory(int32 CategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSubCategory(int32 CategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainCategory(int32 CategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitCategoryData();
    
};

