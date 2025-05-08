#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Pet.generated.h"

class APetRenderRoom;
class UImage;
class UMM_PetMain;
class UMM_PetSpeechBalloon;
class UMirImage;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Pet : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APetRenderRoom* m_pRenderRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_Spc_RotateArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PetMain* m_PetMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PetSpeechBalloon* m_PetSpeechBalloon;
    
public:
    UMM_B_Pet();

private:
    UFUNCTION(BlueprintCallable)
    void StartPetEquipAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPetLoaded(int32 iPetID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickGoodsReturn();
    
    UFUNCTION(BlueprintCallable)
    void ChangeContents();
    
};

