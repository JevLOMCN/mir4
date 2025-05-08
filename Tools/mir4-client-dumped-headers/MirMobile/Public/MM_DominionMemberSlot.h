#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_DominionMemberSlot.generated.h"

class UMM_GuildMemberPortrait;
class UMirButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_DominionMemberSlot : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuildMemberPortrait* m_pPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnClick;
    
public:
    UMM_DominionMemberSlot();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot();
    
};

