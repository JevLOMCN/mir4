#pragma once
#include "CoreMinimal.h"
#include "MM_CommonVerticalTabBtn.h"
#include "MM_CommonVerticalTabTreeBtn.generated.h"

class UMirImage;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CommonVerticalTabTreeBtn : public UMM_CommonVerticalTabBtn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_pVrtSubTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgArrowUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgArrowDown;
    
public:
    UMM_CommonVerticalTabTreeBtn();

};

