#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_New_Force_Detail_Info.generated.h"

class UHorizontalBox;
class UMM_Common_Btn_Symbol;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_New_Force_Detail_Info : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_CurInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ForceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_NextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_NextForceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_NextDetail;
    
public:
    UMM_New_Force_Detail_Info();

    UFUNCTION(BlueprintCallable)
    void OnClickDetail();
    
};

