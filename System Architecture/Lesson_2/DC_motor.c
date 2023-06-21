#include "DC_motor.h"
unsigned int speed;
void(*DC_motor_state)();
enum DC_state DC_state_id;
void DC_init(){
    printf("DC_motor_init\n");
}
void DC_motor_set(int s){
    speed = s;
    DC_motor_state = STATE(DC_busy);
    printf("CA --> DC  DC_motor()\n");
}
STATE_define(DC_idle){
    DC_state_id = DC_idle;
    DC_motor_state = STATE(DC_idle);
    printf("DC_idle state speed = %d\n\n\n",speed);
}
STATE_define(DC_busy){
    DC_state_id = DC_busy;
    DC_motor_state = STATE(DC_idle);
    printf("DC_busy state speed = %d\n\n\n",speed);
}