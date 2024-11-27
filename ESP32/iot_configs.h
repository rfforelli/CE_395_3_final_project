/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    Linkedin: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    Youtube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/

// Enter Your Wifi and Password
#define IOT_CONFIG_WIFI_SSID "Ryans-iPhone"
#define IOT_CONFIG_WIFI_PASSWORD "<redacted>"


// Azure IoT Hub
// #define IOT_CONFIG_IOTHUB_FQDN "ryanforelli-hub.azure-devices.net"
#define IOT_CONFIG_IOTHUB_FQDN "panithan-hub.azure-devices.net"
// Azure IoT Gub Device ID
// #define IOT_CONFIG_DEVICE_ID "ESP32IoT495"
#define IOT_CONFIG_DEVICE_ID "DE10nano-PanithanB"
// Azure IoT Hub Device Key (primary key)
#define IOT_CONFIG_DEVICE_KEY "<redacted>"

// Publish 1 message every 15 seconds
#define TELEMETRY_FREQUENCY_MILLISECS 15000
