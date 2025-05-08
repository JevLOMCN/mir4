#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Guild_DevList.generated.h"

class UCanvasPanel;
class UMM_Guild_DevSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Guild_DevList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> m_arCanSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_DevSlot*> m_arSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_DevSlot*> m_arSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_DevSlot*> m_arSlot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_DevSlot*> m_arSlot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Guild_DevSlot*> m_arUsedDevSlot;
    
public:
    UMM_Guild_DevList();

};

