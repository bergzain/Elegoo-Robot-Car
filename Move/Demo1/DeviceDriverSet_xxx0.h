#ifndef _DeviceDriverSet_xxx0_H_
#define _DeviceDriverSet_xxx0_H_

#include <arduino.h>

// Motor
class DeviceDriverSet_Motor{
public:
    void DeviceDriverSet_Motor_Init(void);
#if _Test_DevicDriverSet
    void DeviceDriverSet_Motor_Test(void);
#endif
    void DeviceDriverSet_Motor_control(boolean direction_A, uint8_t speed_A, boolean directon_B, uint8_t speed_B, boolean controlED);

private:
#define PIN_Motor_PWMA 5
#define PIN_Motor_PWMB 5
#define PIN_Motor_BIN_1 8
#define PIN_Motor_AIN_1 7
#define PIN_Motor_STBY 3

public:
#define speed_Max 255
#define direction_just true // motor forward 
#define direction_back false // motor backward 
#define direction_void 3

#define Duration_enable true
#define Duration_disable false
#define control_enable true
#define control_disable false
};
#endif
