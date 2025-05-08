#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "CheatConnectServer.generated.h"

class UMirButton;

UCLASS(Blueprintable, EditInlineNew)
class UCheatConnectServer : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_MasterServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_QAServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_PreAlphaServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_AlphaServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_BetaServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_LiveServer;
    
public:
    UCheatConnectServer();

    UFUNCTION(BlueprintCallable)
    void OnClickQAServer();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPreAlphaServer();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMasterServer();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLiveServer();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBetaServer();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAlphaServer();
    
};

