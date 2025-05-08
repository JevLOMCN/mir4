#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Skill_Info.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Slot_Material_Item;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Skill_Info : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_TxtNotice;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Material_Item* m_SlotMaterial[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CBExchange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CBLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CBLearn;
    
public:
    UMM_Skill_Info();

    UFUNCTION(BlueprintCallable)
    void OnClickLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLearn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickExchange();
    
};

