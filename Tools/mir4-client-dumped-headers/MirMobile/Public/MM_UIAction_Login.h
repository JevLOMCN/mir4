#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Login.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Login : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Login();

    UFUNCTION(BlueprintCallable)
    void ShowAccountWidget();
    
    UFUNCTION(BlueprintCallable)
    void Show_LoginWidget(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void OnWin64GoogleSignin(const FString& IdToken);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginStart();
    
    UFUNCTION(BlueprintCallable)
    void OnGuestRestore(const bool Success, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnClickOption();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLogout();
    
    UFUNCTION(BlueprintCallable)
    void OnClickLogin();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCS();
    
    UFUNCTION(BlueprintCallable)
    bool OnClickAccess();
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationSignOut(const bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationSignIn(const bool Success);
    
    UFUNCTION(BlueprintCallable)
    void Init_ServerInfo();
    
    UFUNCTION(BlueprintCallable)
    void GotoWorld();
    
private:
    UFUNCTION(BlueprintCallable)
    void ExcuteReqPushAgree();
    
    UFUNCTION(BlueprintCallable)
    void ExcuteReqAgreeTerms();
    
};

