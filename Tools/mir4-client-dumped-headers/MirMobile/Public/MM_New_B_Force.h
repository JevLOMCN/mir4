#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_New_B_Force.generated.h"

class UImage;
class UMM_New_Force_Ability_List;
class UMM_New_Force_Info;
class UMM_New_Force_Page;
class UMM_New_Force_Skill_Info;
class UMM_New_Force_Tab;
class UMM_New_Force_Upgrade;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_New_B_Force : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_C_Scr_Tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_New_Force_Tab*> m_arTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_New_Force_Skill_Info* m_C_Skill_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_New_Force_Info* m_C_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_New_Force_Page* m_C_Page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_New_Force_Ability_List* m_C_AbilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_New_Force_Upgrade* m_C_Upgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_TargetPos;
    
public:
    UMM_New_B_Force();

};

