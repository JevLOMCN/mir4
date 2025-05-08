#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UserEvent_Attendance_Day.generated.h"

class UMM_UserEvent_Attendance_Day_Slot;
class UMM_UserEvent_WebBanner;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UserEvent_Attendance_Day : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Thumb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_WebBanner* m_WebBanner;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Attendance_Day_Slot* m_DaySlot[7];
    
public:
    UMM_UserEvent_Attendance_Day();

};

