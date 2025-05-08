#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_NewGuild.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_GuildMembers;
class UMM_GuildOption;
class UMM_Guild_MainHome;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_NewGuild : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_CT_HrzTabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_MainHome* m_Guild_MainHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuildMembers* guild_member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuildOption* guild_option;
    
public:
    UMM_B_NewGuild();

    UFUNCTION(BlueprintCallable)
    void OnClickTab(int32 iIndex, bool bLocked);
    
};

