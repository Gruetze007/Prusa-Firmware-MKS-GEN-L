//! @file

#ifndef FIRMWARE_SYSTEM_TIMER_H_
#define FIRMWARE_SYSTEM_TIMER_H_

#include "Arduino.h"
// MKS_GEN_L
//#define SYSTEM_TIMER_2

#ifdef SYSTEM_TIMER_2
#include "timer02.h"
#define _millis millis2
#define _micros micros2
#define _delay delay2
#define _tone tone
#define _noTone noTone

#define timer02_set_pwm0(pwm0)

#else //SYSTEM_TIMER_2
#define _millis millis
#define _micros micros
#define _delay delay
#define _tone tone
#define _noTone noTone
#define timer02_set_pwm0(pwm0)

// MKS_GEN_L
#include <inttypes.h>

#if defined(__cplusplus)
extern "C" {
#endif //defined(__cplusplus)

///! Initializes TIMER4 for fast PWM mode-driven bed heating
// Heatbed at Pin 8 (PH5) => OC4C, so we have to use Timer4 instead of Timer0
extern void timer4_init(void);

#if defined(__cplusplus)
}
#endif //defined(__cplusplus)
// MKS_GEN_L
#endif //SYSTEM_TIMER_2

#endif /* FIRMWARE_SYSTEM_TIMER_H_ */
