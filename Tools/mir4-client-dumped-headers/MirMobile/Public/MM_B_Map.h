#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Map.generated.h"

class UHorizontalBox;
class UMM_Common_Btn_Symbol;
class UMM_Map_Minimap;
class UMM_Map_NameBtn;
class UMM_Map_Worldmap;
class UMirButton;
class UMirCanvasPanel;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Map : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_HrzMenu[3];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Map_NameBtn* m_Menu[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CBClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Map_Minimap* m_Minimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Map_Worldmap* m_Worldmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Canvas_AreaMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_AreaPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_AreaNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Canvas_ServerChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_ServerChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Canvas_ConquerServer_Img;
    
public:
    UMM_B_Map();

    UFUNCTION(BlueprintCallable)
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickServerChange();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAreaPrev();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAreaNext();
    
};

