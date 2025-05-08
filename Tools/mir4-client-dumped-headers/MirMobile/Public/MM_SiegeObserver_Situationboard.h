#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SiegeObserver_Situationboard.generated.h"

class UMM_Occupation_BattleFieldInfo;
class UMM_Occupation_Minimap;
class UMirImage;
class UMirProgressBar;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_SiegeObserver_Situationboard : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Occupation_Minimap* m_SiegeMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Occupation_BattleFieldInfo* m_SiegeBattleFieldInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Offense_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Defense_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Offense_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Progress_Defense_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Offense_Warrior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Defense_Warrior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Offense_Warrior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Progress_Defense_Warrior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Offense_Magician;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Defense_Magician;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Offense_Magician;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Progress_Defense_Magician;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Offense_Taoist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Defense_Taoist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Offense_Taoist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Progress_Defense_Taoist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Offense_Assassin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Defense_Assassin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Offense_Assassin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Progress_Defense_Assassin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Offense_Berserker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Defense_Berserker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Offense_Berserker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirProgressBar* m_Progress_Defense_Berserker;
    
public:
    UMM_SiegeObserver_Situationboard();

};

