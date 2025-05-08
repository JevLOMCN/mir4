#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopupGuildSearch.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopupGuildSearch : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_world;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Guild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_list;
    
public:
    UMM_PopupGuildSearch();

    UFUNCTION(BlueprintCallable)
    void OnClickPrev();
    
    UFUNCTION(BlueprintCallable)
    void OnClickNext();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

