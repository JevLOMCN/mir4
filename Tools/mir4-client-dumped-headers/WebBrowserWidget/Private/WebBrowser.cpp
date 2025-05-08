#include "WebBrowser.h"

UWebBrowser::UWebBrowser() {
    this->bSupportsTransparency = false;
}

void UWebBrowser::UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent) {
}

void UWebBrowser::LoadURL(const FString& NewURL) {
}

void UWebBrowser::LoadString(const FString& Contents, const FString& DummyURL) {
}

void UWebBrowser::LoadRequest(const FString& URL, const FString& Method, TMap<FString, FString> HeaderMap, const FString& Content) {
}

FString UWebBrowser::GetUrl() const {
    return TEXT("");
}

FText UWebBrowser::GetTitleText() const {
    return FText::GetEmpty();
}

void UWebBrowser::ExecuteJavascript(const FString& ScriptText) {
}

void UWebBrowser::CallJSFunction(const FString& FunctionName, const FString& Param) {
}

void UWebBrowser::BindUObject(const FString& Name, UObject* Object, bool bIsPermanent) {
}


