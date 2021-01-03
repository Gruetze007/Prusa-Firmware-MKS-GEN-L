/*****************************************************************
* Arduino RAMPS 1.3/1.4 Pin Assignments
******************************************************************/

#define ELECTRONICS "MKS_GEN_L"

#define KNOWN_BOARD
#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu.
#endif

//#define TMC2130
//#define UVLO_SUPPORT

//#define AMBIENT_THERMISTOR
//#define PINDA_THERMISTOR

//#define W25X20CL                 // external 256kB flash
//#define BOOTAPP                  // bootloader support

//#define IR_SENSOR

#define SWI2C_SDA          20 
#define SWI2C_SCL          21 

// core pins
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_MIN_PIN           3
#define X_MAX_PIN           2
#define X_ENABLE_PIN       38
#define X_MS1_PIN          -1
#define X_MS2_PIN          -1

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Y_ENABLE_PIN       56
#define Y_MS1_PIN          -1
#define Y_MS2_PIN          -1

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19
#define Z_ENABLE_PIN       62
#define Z_MAX_PIN          19
#define Z_MS1_PIN          -1
#define Z_MS2_PIN          -1

#define HEATER_BED_PIN      8
#define TEMP_BED_PIN       14  //A14
#define HEATER_0_PIN       10
#define TEMP_0_PIN         13  //A13

#define HEATER_1_PIN       -1 

#ifdef PINDA_THERMISTOR //PINDA_THERMISTOR 
  #define TEMP_1_PIN       15  //A15
  #define TEMP_PINDA_PIN   15  //A15
#else
  #define TEMP_1_PIN       -1
#endif 

#ifdef AMBIENT_THERMISTOR //AMBIENT_THERMISTOR 
  #define TEMP_1_PIN       15  //A15
  #define TEMP_AMBIENT_PIN 15  //A15
#else
  #define TEMP_1_PIN       -1
#endif 

#define HEATER_2_PIN       -1
#define TEMP_2_PIN         -1  

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_MS1_PIN         -1
#define E0_MS2_PIN         -1
#ifdef TMC2130
  #define E0_TMC2130_CS    42
  #define E0_TMC2130_DIAG  -1 //NO DIAG OUTPUTS
#endif

//#define MOTOR_CURRENT_PWM_XY_PIN -1
//#define MOTOR_CURRENT_PWM_Z_PIN  -1
//#define MOTOR_CURRENT_PWM_E_PIN  -1

#define SDPOWER            -1
#define SDSS               53  //The SDSS pin uses a different pin mapping from file Sd2PinMap.h
#define LED_PIN            -1  //TODO what is this for?
#define FAN_PIN             9
#define FAN_1_PIN          -1
#define PS_ON_PIN          12
#define KILL_PIN           41  //80 with Smart Controller LCD
#define SUICIDE_PIN        -1  //PIN that has to be turned on right after start, to keep power flowing.

//#define LCD_BL_PIN         -1  //backlight control pin
#define BEEPER             37
#define LCD_PINS_RS        16
#define LCD_PINS_ENABLE    17
#define LCD_PINS_D4        23
#define LCD_PINS_D5        25
#define LCD_PINS_D6        27
#define LCD_PINS_D7        29

//buttons are directly attached using AUX-2
#define BTN_EN1            33
#define BTN_EN2            31
#define BTN_ENC            35  // the click

#ifndef SDSUPPORT
  // these pins are defined in the SD library if building with SD support
  #define SCK_PIN          52
  #define MISO_PIN         50
  #define MOSI_PIN         51
#endif
  
#define SDCARDDETECT       49

#define TACH_0             -1 
#define TACH_1             -1 

#ifndef IR_SENSOR
  #define IR_SENSOR_PIN     5  //IR sensor on RAMPS pin D5 of servo motors pins
#endif 

// The Z2 axis, if any, should be the next open extruder port
#ifdef Z_DUAL_STEPPER_DRIVERS
    #define Z2_STEP_PIN    36
    #define Z2_DIR_PIN     34
    #define Z2_ENABLE_PIN  30
#endif
