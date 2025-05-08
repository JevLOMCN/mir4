#pragma once
#include "CoreMinimal.h"
#include "ECastleContents.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Dominion.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Dominion : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNowDominionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iStartDominionID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 m_iTargetUserUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_strTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iSelectPBS_ID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECastleContents m_eOpenContentsPopup;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECastleContents m_eReservationContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> m_arrActiveTab;
    
public:
    UMM_UIAction_Dominion();

};

