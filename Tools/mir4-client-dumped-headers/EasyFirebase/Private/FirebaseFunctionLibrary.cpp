#include "FirebaseFunctionLibrary.h"

UFirebaseFunctionLibrary::UFirebaseFunctionLibrary() {
}

void UFirebaseFunctionLibrary::WriteLog(const FString& Log) {
}

void UFirebaseFunctionLibrary::WriteError(const FString& Log, int32 code) {
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::UnsubscribeLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::Unsubscribe(const FString& topic) {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::SubscribeLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::Subscribe(const FString& topic) {
    return NULL;
}

void UFirebaseFunctionLibrary::SetUserProperty(const FString& Name, const FString& Property) {
}

void UFirebaseFunctionLibrary::SetUserId(const FString& UserID) {
}

void UFirebaseFunctionLibrary::SetString(const FString& Key, const FString& Value) {
}

void UFirebaseFunctionLibrary::SetInteger(const FString& Key, const int32 Value) {
}

void UFirebaseFunctionLibrary::SetFloat(const FString& Key, const float Value) {
}

void UFirebaseFunctionLibrary::SetDefaults(const TArray<FFirebaseConfigKeyValueVariant>& defaults) {
}

void UFirebaseFunctionLibrary::SetCurrentScreen(const FString& screen_name, const FString& screen_class) {
}

void UFirebaseFunctionLibrary::SetBool(const FString& Key, const bool Value) {
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::RequestPermissionLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::RequestPermission() {
    return NULL;
}

FString UFirebaseFunctionLibrary::PollRegistrationToken() {
    return TEXT("");
}

bool UFirebaseFunctionLibrary::PollMessage(FFirebaseMessage& Message) {
    return false;
}

void UFirebaseFunctionLibrary::LogStringEvent(AnalyticsEvent Name, AnalyticsParameter parameter_name, const FString& parameter_value) {
}

void UFirebaseFunctionLibrary::LogIntEvent(AnalyticsEvent Name, AnalyticsParameter parameter_name, int32 parameter_value) {
}

void UFirebaseFunctionLibrary::LogInt64Event(AnalyticsEvent Name, AnalyticsParameter parameter_name, int64 parameter_value) {
}

void UFirebaseFunctionLibrary::LogFloatEvent(AnalyticsEvent Name, AnalyticsParameter parameter_name, float parameter_value) {
}

void UFirebaseFunctionLibrary::LogEvent(AnalyticsEvent Name) {
}

void UFirebaseFunctionLibrary::LogCustomStringEvent(const FString& Name, const FString& parameter_name, const FString& parameter_value) {
}

void UFirebaseFunctionLibrary::LogCustomIntEvent(const FString& Name, const FString& parameter_name, int32 parameter_value) {
}

void UFirebaseFunctionLibrary::LogCustomInt64Event(const FString& Name, const FString& parameter_name, int64 parameter_value) {
}

void UFirebaseFunctionLibrary::LogCustomFloatEvent(const FString& Name, const FString& parameter_name, float parameter_value) {
}

void UFirebaseFunctionLibrary::LogCustomEventWithParameterList(const FString& Name, const TArray<FAnalyticsParam>& parameterList) {
}

void UFirebaseFunctionLibrary::LogCustomEvent(const FString& Name) {
}

bool UFirebaseFunctionLibrary::IsSupportAppleSignIn() {
    return false;
}

FString UFirebaseFunctionLibrary::GetString(const FString& Key, FValueInfo& Info) {
    return TEXT("");
}

int64 UFirebaseFunctionLibrary::GetLong(const FString& Key, FValueInfo& Info) {
    return 0;
}

TArray<FString> UFirebaseFunctionLibrary::GetKeysByPrefix(const FString& Key) {
    return TArray<FString>();
}

TArray<FString> UFirebaseFunctionLibrary::GetKeys() {
    return TArray<FString>();
}

float UFirebaseFunctionLibrary::GetDouble(const FString& Key, FValueInfo& Info) {
    return 0.0f;
}

bool UFirebaseFunctionLibrary::GetBoolean(const FString& Key, FValueInfo& Info) {
    return false;
}

void UFirebaseFunctionLibrary::ForceCrash() {
}

bool UFirebaseFunctionLibrary::FireBaseInitialize() {
    return false;
}

UFirebaseFutureVoid* UFirebaseFunctionLibrary::Fetch(int64 cache_expiration_in_seconds) {
    return NULL;
}

void UFirebaseFunctionLibrary::CrashTest3() {
}

void UFirebaseFunctionLibrary::CrashTest2() {
}

void UFirebaseFunctionLibrary::CrashTest() {
}

bool UFirebaseFunctionLibrary::ActivateFetched() {
    return false;
}


