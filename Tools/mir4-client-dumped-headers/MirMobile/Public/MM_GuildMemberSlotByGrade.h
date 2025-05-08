#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildMemberSlotByGrade.generated.h"

class UMirButton;
class UMirCheckBox;
class UMirImage;
class UMirTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildMemberSlotByGrade : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* img_grade_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_grade_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_member_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_fold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* vb_member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btn_fold;
    
public:
    UMM_GuildMemberSlotByGrade();

    UFUNCTION(BlueprintCallable)
    void OnClickFold();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBox(bool check_state_);
    
};

