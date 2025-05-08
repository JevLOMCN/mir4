#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_CharacterSelect.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_CharacterSelect : public UMM_UIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MAX_SLOT_COUNT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LIMIT_SLOT_COUNT;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SOUND_GAMESTART;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DELETE_DIALOG_TITLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DELETE_DIALOG_DESCRIPTION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DELETE_DIALOG_BTN_OK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DELETE_DIALOG_BTN_CANCEL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DELETE_UNABLE_GAMESTART;
    
public:
    UMM_UIAction_CharacterSelect();

    UFUNCTION(BlueprintCallable)
    void OnTimeoutGameStart();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogDeleteCharacter();
    
};

