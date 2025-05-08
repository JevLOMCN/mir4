#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharAbility.generated.h"

class UMM_CharAbility_Info_DragonicGear;
class UMM_CharAbility_Info_Fame;
class UMM_CharAbility_Info_Great;
class UMM_CharAbility_Info_Guild;
class UMM_CharAbility_Info_HolyStuff;
class UMM_CharAbility_Info_Magicstone;
class UMM_CharAbility_Info_Mystical;
class UMM_CharAbility_Info_Pet;
class UMM_CharAbility_Info_Rank;
class UMM_CharAbility_Info_Rating;
class UMM_CharAbility_Info_Skill;
class UMM_CharAbility_Info_Training;
class UMM_CharInfo_GuildBtnList;
class UMM_Inventory_Tab;
class UMirCanvasPanel;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharAbility : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* Panel_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* Panel_Fame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Rating* Info_Rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Rank* Info_Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Guild* Info_Guild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Fame* Info_Fame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Skill* Info_Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Pet* Info_Pet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Training* Info_Training;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharInfo_GuildBtnList* m_GuildBtnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Great* Info_GreatBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_HolyStuff* Info_HolyStuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Mystical* Info_Mystical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_Magicstone* Info_MagicStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharAbility_Info_DragonicGear* Info_DragonicGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Inventory_Tab* Tab_List;
    
public:
    UMM_CharAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickTab(int32 nKey);
    
};

