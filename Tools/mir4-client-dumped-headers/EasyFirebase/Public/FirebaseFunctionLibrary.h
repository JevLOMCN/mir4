#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnalyticsEvent.h"
#include "AnalyticsParam.h"
#include "AnalyticsParameter.h"
#include "FirebaseConfigKeyValueVariant.h"
#include "FirebaseMessage.h"
#include "ValueInfo.h"
#include "FirebaseFunctionLibrary.generated.h"

class UFirebaseFutureVoid;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFirebaseFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void WriteLog(const FString& Log);
    
    UFUNCTION(BlueprintCallable)
    static void WriteError(const FString& Log, int32 code);
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* UnsubscribeLastResult();
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* Unsubscribe(const FString& topic);
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* SubscribeLastResult();
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* Subscribe(const FString& topic);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserProperty(const FString& Name, const FString& Property);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserId(const FString& UserID);
    
    UFUNCTION(BlueprintCallable)
    static void SetString(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteger(const FString& Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloat(const FString& Key, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaults(const TArray<FFirebaseConfigKeyValueVariant>& defaults);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentScreen(const FString& screen_name, const FString& screen_class);
    
    UFUNCTION(BlueprintCallable)
    static void SetBool(const FString& Key, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* RequestPermissionLastResult();
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* RequestPermission();
    
    UFUNCTION(BlueprintCallable)
    static FString PollRegistrationToken();
    
    UFUNCTION(BlueprintCallable)
    static bool PollMessage(FFirebaseMessage& Message);
    
    UFUNCTION(BlueprintCallable)
    static void LogStringEvent(AnalyticsEvent Name, AnalyticsParameter parameter_name, const FString& parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogIntEvent(AnalyticsEvent Name, AnalyticsParameter parameter_name, int32 parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogInt64Event(AnalyticsEvent Name, AnalyticsParameter parameter_name, int64 parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogFloatEvent(AnalyticsEvent Name, AnalyticsParameter parameter_name, float parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogEvent(AnalyticsEvent Name);
    
    UFUNCTION(BlueprintCallable)
    static void LogCustomStringEvent(const FString& Name, const FString& parameter_name, const FString& parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogCustomIntEvent(const FString& Name, const FString& parameter_name, int32 parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogCustomInt64Event(const FString& Name, const FString& parameter_name, int64 parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogCustomFloatEvent(const FString& Name, const FString& parameter_name, float parameter_value);
    
    UFUNCTION(BlueprintCallable)
    static void LogCustomEventWithParameterList(const FString& Name, const TArray<FAnalyticsParam>& parameterList);
    
    UFUNCTION(BlueprintCallable)
    static void LogCustomEvent(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSupportAppleSignIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetString(const FString& Key, FValueInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static int64 GetLong(const FString& Key, FValueInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetKeysByPrefix(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetKeys();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDouble(const FString& Key, FValueInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoolean(const FString& Key, FValueInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    static void ForceCrash();
    
    UFUNCTION(BlueprintCallable)
    static bool FireBaseInitialize();
    
    UFUNCTION(BlueprintCallable)
    static UFirebaseFutureVoid* Fetch(int64 cache_expiration_in_seconds);
    
    UFUNCTION(BlueprintCallable)
    static void CrashTest3();
    
    UFUNCTION(BlueprintCallable)
    static void CrashTest2();
    
    UFUNCTION(BlueprintCallable)
    static void CrashTest();
    
    UFUNCTION(BlueprintCallable)
    static bool ActivateFetched();
    
};

