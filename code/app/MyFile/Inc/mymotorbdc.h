#ifndef __MYMOTORBDC_H
#define __MYMOTORBDC_H
#include "stm32f0xx_hal.h"

#define MPWM_HIGHFREQUENCY 1

#define PWM_M1 0
#define PWM_M2 1
#define PWM_M3 2
#define PWM_M4 3

#define MDIR_FFW 0
#define MDIR_REV 1

// The direction each motor was last driven in (MDIR_FFW / MDIR_REV), kept through a
// coast. Read by the encoder decoding where an encoder's direction line is missing.
extern volatile uint8_t motor_last_dir[4];

void InitMotorPwm(void);
void SetMotorThrottle(uint8_t port,int8_t throttle);
#endif
