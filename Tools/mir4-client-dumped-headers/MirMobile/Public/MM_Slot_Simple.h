#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Base.h"
#include "MM_Slot_Simple.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Simple : public UMM_Slot_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgTierBg;
    
public:
    UMM_Slot_Simple();

};

