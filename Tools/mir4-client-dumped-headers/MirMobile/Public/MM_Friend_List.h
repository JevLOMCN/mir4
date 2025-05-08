#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Friend_List.generated.h"

class UFriendSlotObj;
class UMirListView;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Friend_List : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_FriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFriendSlotObj*> m_arFriendSlotObj;
    
public:
    UMM_Friend_List();

};

