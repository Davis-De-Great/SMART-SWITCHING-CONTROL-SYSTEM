
// Generator_Remote_Control_Code

#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT
#include <RemoteXY.h>

// Generator Remote Settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "Shedrack Generator"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 1500

// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,1,0,0,0,37,0,13,13,1,
  2,1,21,45,22,11,36,26,31,31,
  79,78,0,79,70,70,0,129,0,18,
  33,26,6,181,71,101,110,101,114,97,
  116,111,114,0 };

// this structure defines all the variables and events of your control interface 
struct {
    // input variables
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 
    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 
} RemoteXY;
#pragma pack(pop)


#define PIN_SWITCH_1 13
void setup() {
  RemoteXY_Init (); 
  pinMode (PIN_SWITCH_1, OUTPUT);
  // TODO you setup code
}
void loop() { 
  RemoteXY_Handler ();
  digitalWrite(PIN_SWITCH_1, (RemoteXY.switch_1==0)?LOW:HIGH);
  // TODO you loop code
   // use the RemoteXY structure for data transfer
  // do not call delay() 
}
