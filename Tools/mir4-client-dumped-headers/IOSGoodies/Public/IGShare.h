#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnSavedDraftDelegateDelegate.h"
#include "OnShareCancelDelegateDelegate.h"
#include "OnShareErrorDelegateDelegate.h"
#include "OnShareSuccessDelegateDelegate.h"
#include "IGShare.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class IOSGOODIES_API UIGShare : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGShare();

    UFUNCTION(BlueprintCallable)
    static void ShareTextWithLink(const FString& Message, const FString& link, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShareTextWithImageAndLink(const FString& Message, UTexture2D* Texture, const FString& link, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShareTextWithImage(const FString& Message, UTexture2D* Texture, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShareText(const FString& Message, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShareLink(const FString& link, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShareImage(UTexture2D* Texture, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void SendSMSViaDefaultApp(const FString& phoneNumber, const FString& msgText);
    
    UFUNCTION(BlueprintCallable)
    static void SendSms(const FString& phoneNumber, const FString& msgText, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback, const FOnShareCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void SendEmailViaDefaultApp(const FString& Subject, const FString& Body, TArray<FString> Recipients, TArray<FString> cc, TArray<FString> bcc);
    
    UFUNCTION(BlueprintCallable)
    static void SendEMail(const FString& Subject, const FString& Body, UTexture2D* Texture, TArray<FString> Recipients, TArray<FString> cc, TArray<FString> bcc, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback, const FOnShareCancelDelegate& onCancelDelegate, const FOnSavedDraftDelegate& onSavedDraftCallback);
    
    UFUNCTION(BlueprintCallable)
    static bool CanSendSMS();
    
    UFUNCTION(BlueprintCallable)
    static bool CanSendEmail();
    
};

