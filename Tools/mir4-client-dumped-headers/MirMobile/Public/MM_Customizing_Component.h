#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_Component.generated.h"

class UCanvasPanel;
class UMirScrollBox;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_Component : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_ComponentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_ComponentCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPanelWidget*> m_ComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UMM_Customizing_Component();

    UFUNCTION(BlueprintCallable)
    void SetCategoryID(int32 _CategoryID);
    
};

