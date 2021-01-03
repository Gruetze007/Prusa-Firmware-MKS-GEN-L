#ifndef _CONFIG_H
#define _CONFIG_H


#include "Configuration_prusa.h"
#include "pins.h"

#if (defined(VOLT_IR_PIN) && defined(IR_SENSOR))
# define IR_SENSOR_ANALOG
#endif

//ADC configuration
// MKS_GEN_L
#ifdef PINDA_THERMISTOR
  // MKS_GEN_L with pinda thermistor */
  #define ADC_CHAN_MSK      0b1110000000000000 //used AD channels bit mask (13 = TEMP_0_PIN, 14 = TEMP_BED_PIN, 15 = TEMP_1_PIN)
  #define ADC_DIDR_MSK      0b1110000000000000 //AD channels DIDR mask (1 ~ disabled digital input)
  #define ADC_CHAN_CNT      3         //number of used channels)
  #define ADC_OVRSAMPL      16        //oversampling multiplier
  #define ADC_CALLBACK      adc_ready //callback function ()
#else
  // MKS_GEN_L without pinda thermistor */
  #define ADC_CHAN_MSK      0b0110000000000000 //used AD channels bit mask (13 = TEMP_0_PIN, 14 = TEMP_BED_PIN)
  #define ADC_DIDR_MSK      0b0110000000000000 //AD channels DIDR mask (1 ~ disabled digital input)
  #define ADC_CHAN_CNT      2         //number of used channels)
  #define ADC_OVRSAMPL      16        //oversampling multiplier
  #define ADC_CALLBACK      adc_ready //callback function ()
#endif // PINDA_THERMISTOR

//SWI2C configuration
#define SWI2C
//#define SWI2C_SDA         20 //SDA on P3
//#define SWI2C_SCL         21 //SCL on P3
#define SWI2C_A8
#define SWI2C_DEL         20 //2us clock delay
#define SWI2C_TMO         2048 //2048 cycles timeout

//PAT9125 configuration
#define PAT9125_SWI2C
#define PAT9125_I2C_ADDR  0x75  //ID=LO
//#define PAT9125_I2C_ADDR  0x79  //ID=HI
//#define PAT9125_I2C_ADDR  0x73  //ID=NC
#define PAT9125_XRES      0
#define PAT9125_YRES      240                   // maximum resolution (5*X cpi)
#define PAT9124_YRES_MM   (5*PAT9125_YRES/25.4) // counts per mm

//SM4 configuration
#define SM4_DEFDELAY      500       //default step delay [us]

//TMC2130 - Trinamic stepper driver
//pinout - hardcoded
//spi:
#define TMC2130_SPI_RATE       0 // fosc/4 = 4MHz
#define TMC2130_SPCR           SPI_SPCR(TMC2130_SPI_RATE, 1, 1, 1, 0)
#define TMC2130_SPSR           SPI_SPSR(TMC2130_SPI_RATE)

//W25X20CL configuration
// MKS_GEN_L
#ifdef W25X20CL // W25X20L-Chip on MKS GEN L board does not exist
  //pinout:
  #define W25X20CL_PIN_CS        32
  //spi:
  #define W25X20CL_SPI_RATE      0 // fosc/4 = 4MHz
  #define W25X20CL_SPCR          SPI_SPCR(W25X20CL_SPI_RATE, 1, 1, 1, 0)
  #define W25X20CL_SPSR          SPI_SPSR(W25X20CL_SPI_RATE)
#endif

//LANG - Multi-language support
#define LANG_MODE              0 // primary language only
//#define LANG_MODE              1 // sec. language support

#define LANG_SIZE_RESERVED     0x3000 // reserved space for secondary language (12288 bytes)


#endif //_CONFIG_H
