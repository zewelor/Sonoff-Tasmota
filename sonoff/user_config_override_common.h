// force the compiler to show a warning to confirm that this file is inlcuded
#warning **** user_config_override_common.h: Using Settings from this File ****

#undef  MQTT_TOPIC
#define MQTT_TOPIC        "sonoff_%06X"           // [Topic] (unique) sonoff_1452234

#undef  WIFI_CONFIG_TOOL
#define WIFI_CONFIG_TOOL  WIFI_WAIT               // [WifiConfig] Default tool if wifi fails to connect

// -- Logging  ---------------
#undef  SERIAL_LOG_LEVEL
#define SERIAL_LOG_LEVEL  LOG_LEVEL_NONE          // [SerialLog] (LOG_LEVEL_NONE, LOG_LEVEL_ERROR, LOG_LEVEL_INFO, LOG_LEVEL_DEBUG, LOG_LEVEL_DEBUG_MORE)

#undef USE_DOMOTICZ                               // Enable Domoticz (+6k code, +0.3k mem)

#undef  MQTT_LIBRARY_TYPE                         // Use PubSubClient library
#define MQTT_LIBRARY_TYPE MQTT_TASMOTAMQTT        // Use TasmotaMqtt library (+4k4 code, +4k mem) - non-TLS only

// -- HTTP ----------------------------------------
#undef USE_EMULATION                              // Enable Belkin WeMo and Hue Bridge emulation for Alexa (+16k code, +2k mem)

// -- mDNS ----------------------------------------
#undef USE_DISCOVERY                              // Enable mDNS for the following services (+8k code, +0.3k mem) - Disable by //

// -- I2C sensors ---------------------------------
#define USE_TSL2561                               // Add I2C code for TSL2561 sensor using library Joba_Tsl2561 (+2k3 code)

// -- Low level interface devices -----------------
#undef USE_IR_REMOTE                              // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k code, 0k3 mem, 48 iram)
#undef USE_ARILUX_RF                              // Add support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))

#undef USE_ARDUINO_OTA                        // Disable support for Arduino OTA
#undef USE_KNX                                // Disable KNX IP Protocol Support
#undef USE_KNX_WEB_MENU
#undef USE_TIMERS                             // Disable support for up to 16 timers
#undef USE_TIMERS_WEB                         // Disable support for timer webpage
#undef USE_SUNRISE                            // Disable support for Sunrise and sunset tools

#undef USE_MHZ19                              // Disable support for MH-Z19 CO2 sensor
#undef USE_SENSEAIR                           // Disable support for SenseAir K30, K70 and S8 CO2 sensor
#undef USE_PMS5003                            // Disable support for PMS5003 and PMS7003 particle concentration sensor
#undef USE_NOVA_SDS                           // Disable support for SDS011 and SDS021 particle concentration sensor
#undef USE_PZEM004T                           // Disable PZEM004T energy sensor
#undef USE_SERIAL_BRIDGE                      // Disable support for software Serial Bridge
#undef USE_SDM120                             // Disable support for Eastron SDM120-Modbus energy meter
#undef USE_SDM630                             // Disable support for Eastron SDM630-Modbus energy meter
#undef USE_IR_REMOTE                          // Disable IR remote commands using library IRremoteESP8266 and ArduinoJson
#undef USE_IR_RECEIVE                         // Disable support for IR receiver
#undef USE_ARILUX_RF                          // Disable support for Arilux RF remote controller
#undef USE_SR04                               // Disable support for for HC-SR04 ultrasonic devices
#undef USE_TM1638                             // Disable support for TM1638 switches copying Switch1 .. Switch8
#undef USE_RF_FLASH                           // Disable support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB
#undef DEBUG_THEO                             // Disable debug code
#undef USE_DEBUG_DRIVER                       // Disable debug code
