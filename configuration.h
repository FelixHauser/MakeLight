// Configuration File added by Felix Hauser
// Wemos pinout: https://escapequotes.net/esp8266-wemos-d1-mini-pins-and-diagram/


#define LIGHT_PIN 13                       // Data pin to controll the LEDs
#define LED_COUNT 40                       // Number of LEDs on your setup 
#define LEDSTRIP_TYPE       WS2811         // you can use any FastLED compatible LEDs, such as   WS2811

#define MAX_AMP 2800                       // Max Nominal amperage of your power supply (in mA)

#define DEVICE_NAME "Makelight"           // Device name and also access point wifi name
