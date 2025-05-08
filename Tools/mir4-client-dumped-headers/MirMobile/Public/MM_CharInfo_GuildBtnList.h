#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharInfo_GuildBtnList.generated.h"

class UCanvasPanel;
class UMirButton;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharInfo_GuildBtnList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_Can_AnimationBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_StartAniOneLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_EndAniOneLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_StartAniTwoLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_EndAniTwoLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_SERVERVISIT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_TARGET_SERVERVISIT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_MSG_TARGET_SERVERVISIT2;
    
public:
    UMM_CharInfo_GuildBtnList();

    UFUNCTION(BlueprintCallable)
    void OnClick_Whispermbol();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_PartyInvite();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildWanted();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildJoinRefuse();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildJoin();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildInviteCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildInvite();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildDonation();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildDominionReward();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildCancelPublicService();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildCancelDominionPK();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildAppointPublicService();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GuildAppointDominionPK();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Friend();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_AniStart();
    
};

