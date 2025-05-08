#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGDeviceInfo.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGDeviceInfo : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGDeviceInfo();

    UFUNCTION(BlueprintCallable)
    static bool SupportsWifiRtt();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsWifiPassPoint();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsWifiDirect();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsWifiAware();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsWifi();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsWebView();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsVulkanHardwareVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsVulkanHardwareLevel();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsVulkanHardwareCompute();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsVerifiedBoot();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsUsbHost();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsUsbAccessory();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsTouchScreenMultiTouchJazzHand();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsTouchScreenMultiTouchDistinct();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsTouchScreenMultiTouch();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsSipVoip();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsSecureUserRemoval();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsScreenPortrtait();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsScreenLandscape();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsPrinting();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsPictureInPicture();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsOpenGlEsExtensionPack();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsNfcHostCardEmulationNfcf();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsNfcHostCardEmulation();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsNfc();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsMidi();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsManagedUsers();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLocationNetwork();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLocationGps();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLocation();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLiveWallpaper();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLiveTv();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLeanbackOnly();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsLeanback();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsInputMethods();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsHomeScreen();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsHifiSensors();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsFreeFormWindowManagement();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsFingerprint();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsFakeTouchMultiTouchJazzHand();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsFakeTouchMultiTouchDistinct();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsFakeTouch();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsEthernet();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsDeviceAdmin();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsConsumerIr();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsConnectionService();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsCompanionDeviceSetup();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsCantSaveState();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsBluetoothLe();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsBluetooth();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsBackup();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAutomotive();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAutofill();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAudioPro();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAudioOutput();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAudioLowLatency();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsAppWidgets();
    
    UFUNCTION(BlueprintCallable)
    static bool SupportsActivitiesOnSecondaryDisplays();
    
    UFUNCTION(BlueprintCallable)
    static bool IsWatch();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTelevision();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPc();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPackageInstalled(const FString& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEmbedded();
    
    UFUNCTION(BlueprintCallable)
    static bool HasVrModeHighPerformance();
    
    UFUNCTION(BlueprintCallable)
    static bool HasVrMode();
    
    UFUNCTION(BlueprintCallable)
    static bool HasVrHeadTracking();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTouchScreen();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTelephonyMbms();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTelephonyGsm();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTelephonyEuicc();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTelephonyCdma();
    
    UFUNCTION(BlueprintCallable)
    static bool HasTelephony();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSystemFeature(const FString& featureName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasStrongBoxKeyStore();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSip();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorStepDetector();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorStepCounter();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorRelativeHumidity();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorProximity();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorLight();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorHeartRateEcg();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorHeartRate();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorGyroscope();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorCompass();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorBarometer();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorAmbientTemperature();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSensorAccelerometer();
    
    UFUNCTION(BlueprintCallable)
    static bool HasRamNormal();
    
    UFUNCTION(BlueprintCallable)
    static bool HasRamLow();
    
    UFUNCTION(BlueprintCallable)
    static bool HasMicrophone();
    
    UFUNCTION(BlueprintCallable)
    static bool HasGamepad();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraLevelFull();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraFront();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraFlash();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraExternal();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraCapabilityRaw();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraCapabilityManualSensor();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraCapabilityManualPostprocessing();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraAutofocus();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraAr();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCameraAny();
    
    UFUNCTION(BlueprintCallable)
    static bool HasCamera();
    
    UFUNCTION(BlueprintCallable)
    static FString GetType();
    
    UFUNCTION(BlueprintCallable)
    static FString GetTags();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSerial();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSdkInt();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRelease();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRadio();
    
    UFUNCTION(BlueprintCallable)
    static FString GetProduct();
    
    UFUNCTION(BlueprintCallable)
    static FString GetModel();
    
    UFUNCTION(BlueprintCallable)
    static FString GetManufacturer();
    
    UFUNCTION(BlueprintCallable)
    static FString GetHardware();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDisplay();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDevice();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCodeName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBrand();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBootloader();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBoard();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBaseOs();
    
    UFUNCTION(BlueprintCallable)
    static FString GetApplicationPackageName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAndroidId();
    
};

