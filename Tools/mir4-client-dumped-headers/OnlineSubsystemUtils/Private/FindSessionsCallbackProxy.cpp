#include "FindSessionsCallbackProxy.h"

UFindSessionsCallbackProxy::UFindSessionsCallbackProxy() {
}

FString UFindSessionsCallbackProxy::GetServerName(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

int32 UFindSessionsCallbackProxy::GetPingInMs(const FBlueprintSessionResult& Result) {
    return 0;
}

int32 UFindSessionsCallbackProxy::GetMaxPlayers(const FBlueprintSessionResult& Result) {
    return 0;
}

int32 UFindSessionsCallbackProxy::GetCurrentPlayers(const FBlueprintSessionResult& Result) {
    return 0;
}

UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN) {
    return NULL;
}


