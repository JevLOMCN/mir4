#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "WidgetBase.generated.h"

class UMirEditableText;
class UMirImage;
class UMirRichTextBlock;
class UMirTextBlock;
class UWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class UWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetBase* m_pParentWidget;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UWidgetBase>> m_arChildWidget;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMirTextBlock>> m_arMirTextBlock;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMirRichTextBlock>> m_arMirRichTextBlock;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMirEditableText>> m_arMirEditableText;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMirImage>> m_arMirImage;
    
public:
    UWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseWidgetAnimation();
    
};

