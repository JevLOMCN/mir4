#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Dominion_Castle.generated.h"

class UMM_Dominion_Castle_Guild;
class UMM_Dominion_History;
class UMM_Dominion_Occupation;
class UMM_Guild_Slot_Btn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dominion_Castle : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STRING_MAIN_BEHAIVOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STRING_SUB_BEHAIVOR;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_Slot_Btn* m_pBtnPublicService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_Slot_Btn* m_pBtnPk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_Slot_Btn* m_pBtnBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Guild_Slot_Btn* m_pBtnPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Castle_Guild* m_pCastleGuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Occupation* m_pDominionOccupation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_History* m_pDominionHistory;
    
public:
    UMM_Dominion_Castle();

    UFUNCTION(BlueprintCallable)
    void OnClickWanted();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPublicService();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPrize();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBuff();
    
};

