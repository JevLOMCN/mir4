#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_CharInfo.generated.h"

class UImage;
class UMM_CharAbility;
class UMM_MyCharinfo;
class UMirButton;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_CharInfo : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOtherUserInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MyCharinfo* m_MyCharinfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility* m_CharAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_RenderTargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Return;
    
public:
    UMM_B_CharInfo();

    UFUNCTION(BlueprintCallable)
    void OnClose_OtherPlayerInfo();
    
};

