#include "MirWebBrowser.h"

UMirWebBrowser::UMirWebBrowser() {
}

void UMirWebBrowser::MirHandleOnUrlChanged(const FText& Text) {
}

bool UMirWebBrowser::MirHandleOnLoadUrl(const FString& Method, const FString& URL, FString& OutResponse) {
    return false;
}

bool UMirWebBrowser::MirHandleOnBeforePopup(const FString& URL, const FString& Frame) {
    return false;
}

void UMirWebBrowser::HandleOnLoadError() {
}

void UMirWebBrowser::HandleOnLoadCompleted() {
}


