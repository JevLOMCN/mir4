#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TimeManagementBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class TIMEMANAGEMENT_API UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeManagementBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameTime TransformTime(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& DestinationRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameTime SnapFrameTimeToRate(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& SnapToRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const FFrameRate& FrameRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_MultipleOf(const FFrameRate& InFrameRate, const FFrameRate& OtherFramerate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_Framerate(const FFrameRate& InFrameRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameRate GetTimecodeFrameRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimecode GetTimecode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_TimecodeToString(const FTimecode& InTimecode, bool bForceSignDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_QualifiedFrameTimeToSeconds(const FQualifiedFrameTime& InFrameTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_FrameRateToSeconds(const FFrameRate& InFrameRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_FrameNumberToInteger(const FFrameNumber& InFrameNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    
};

