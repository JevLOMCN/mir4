#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGShareEmailData.h"
#include "AGShareBPL.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGShareBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGShareBPL();

    UFUNCTION(BlueprintCallable)
    static void TweetTextWithImage(const FString& Text, UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    static void TweetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void ShareVideo(const FString& videoPath, bool showChooser, const FString& chooserTitle);
    
    UFUNCTION(BlueprintCallable)
    static void ShareTextWithImage(const FString& Subject, const FString& Text, UTexture2D* Image, bool showChooser, const FString& chooserTitle);
    
    UFUNCTION(BlueprintCallable)
    static void ShareText(const FString& Subject, const FString& Text, bool showChooser, const FString& chooserTitle);
    
    UFUNCTION(BlueprintCallable)
    static void ShareInstagram(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    static void ShareImage(UTexture2D* Image, bool showChooser, const FString& chooserTitle);
    
    UFUNCTION(BlueprintCallable)
    static void SendWhatsAppText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SendWhatsAppImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    static void SendViberText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SendViberImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    static void SendTelegramText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SendTelegramImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    static void SendSmsWithDefaultApp(const FString& phoneNumber, const FString& Message, bool showChooser, const FString& chooserTitle);
    
    UFUNCTION(BlueprintCallable)
    static void SendSmsSilently(const FString& phoneNumber, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void SendMultipleImagesEMail(FAGShareEmailData emailData, TArray<UTexture2D*> extraImages, bool showChooser, const FString& chooserTitle);
    
    UFUNCTION(BlueprintCallable)
    static void SendFacebookText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SendFacebookImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    static void SendEMail(FAGShareEmailData emailData, bool showChooser, const FString& chooserTitle);
    
};

