#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include "state.h"
void DC_init();
STATE_define(DC_idle);
STATE_define(DC_busy);
extern void (*DC_motor_state)();
#endif /* DC_MOTOR_H_ */