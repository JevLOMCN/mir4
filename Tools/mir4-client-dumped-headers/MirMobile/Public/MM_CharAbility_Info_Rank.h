#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharAbility_Info_Rank.generated.h"

class UMM_PlayerRank;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharAbility_Info_Rank : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_PlayerRank*> PlayerRankList;
    
public:
    UMM_CharAbility_Info_Rank();

};

