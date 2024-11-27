/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    Linkedin: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    Youtube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/

// Enter Your Wifi and Password
#define IOT_CONFIG_WIFI_SSID "Ryans-iPhone"
#define IOT_CONFIG_WIFI_PASSWORD "hellothere"


// Azure IoT Hub
// #define IOT_CONFIG_IOTHUB_FQDN "ryanforelli-hub.azure-devices.net"
#define IOT_CONFIG_IOTHUB_FQDN "panithan-hub.azure-devices.net"
// #define IOT_CONFIG_IOTHUB_FQDN "sssmHub.servicebus.windows.net"
// #define IOT_CONFIG_IOTHUB_FQDN "esp32-iot495.azureiotcentral.com"
// Azure IoT Gub Device ID
// #define IOT_CONFIG_DEVICE_ID "ESP32IoT495"
#define IOT_CONFIG_DEVICE_ID "DE10nano-PanithanB"
// #define IOT_CONFIG_DEVICE_ID "DE10nano-PanithanB"
// Azure IoT Hub Device Key (primary key)
// #define IOT_CONFIG_DEVICE_KEY "7gAnjtw+tEJDIm0Kac9xLGbG7lOHxni+fJ/ryjHswPE="
#define IOT_CONFIG_DEVICE_KEY "abb00TYkGH5UIHE22Lhp4vEYl02AMaxHtXCW8/tPIZw="
// #define IOT_CONFIG_DEVICE_KEY "Endpoint=sb://sssmhub.servicebus.windows.net/;SharedAccessKeyName=RootManageSharedAccessKey;SharedAccessKey=Shbjuw2tWq1yY8zO5iEBEeNpBNyGgahgR+AEhJMTNmk=;EntityPath=sssmhub-d29baccca4"

// Publish 1 message every 5 seconds
#define TELEMETRY_FREQUENCY_MILLISECS 15000
