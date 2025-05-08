#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_QuestRelation.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_QuestRelation : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_QuestRelation();

    UFUNCTION(BlueprintCallable)
    void ShowReservedMessage();
    
    UFUNCTION(BlueprintCallable)
    void ReRequestEndRelation();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGroupOfQuest(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCategory(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NoResponseRelationEnd();
    
};

