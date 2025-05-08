#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildShortCut.generated.h"

class UMM_Common_Btn;
class UMirButton;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildShortCut : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_character_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_guild_grade;
    
public:
    UMM_GuildShortCut();

    UFUNCTION(BlueprintCallable)
    void OnClickGuildGrade();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCharacterDetail();
    
};

