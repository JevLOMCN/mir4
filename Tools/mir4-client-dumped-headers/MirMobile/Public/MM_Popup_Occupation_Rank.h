#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Occupation_Rank.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Occupation_Rank_List;
class UMirButton;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Occupation_Rank : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Occupation_Rank_List*> RankList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Occupation_Rank_List* MyRankInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_Ok;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Close_BG;
    
public:
    UMM_Popup_Occupation_Rank();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

