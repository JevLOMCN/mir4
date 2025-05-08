#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ClassSelect.generated.h"

class UMM_ClassSelect_Slot;
class UMM_Common_Btn;
class UMM_MoviePlayerWidget;
class UMirButton;
class UMirImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ClassSelect : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MoviePlayerWidget* m_pMoviePlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pClassSymbolImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ClassNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ClassDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pClassConfirmBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirButton* m_pMovieReplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Ani_ClassSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_ClassSelect_Slot*> m_SelectSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_nft_import;
    
    UMM_ClassSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectClass(int32 ClassID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickNftImport();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMovieReplay();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBackButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToCustomizingEvent();
    
    UFUNCTION(BlueprintCallable)
    void MoveToCustomizing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToCharacterSelectEvent();
    
    UFUNCTION(BlueprintCallable)
    void MoveToCharacterSelect();
    
};

