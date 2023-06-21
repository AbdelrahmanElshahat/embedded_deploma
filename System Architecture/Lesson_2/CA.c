#include "CA.h"
void (*CA_state)();
unsigned int Distance , Speed , threshold =50;
enum CA_state CA_state_id;
void US_distance_get(int d){
    Distance = d;
    (Distance<=threshold)?(CA_state = STATE(CA_waiting)):(CA_state = STATE(CA_driving));
    printf("CA --> US  US_Distance_get()\n");
}
STATE_define(CA_waiting){
    CA_state_id = CA_waiting;
    Speed = 0;
    printf("CA_waiting state : Distance =%d Speed = %d\n\n\n",Distance,Speed);
    DC_motor_set(Speed);
    
}
STATE_define(CA_driving){
    CA_state_id = CA_driving;
    Speed = 30;
    printf("CA_driving state : Distance =%d Speed = %d\n\n\n",Distance,Speed);
    DC_motor_set(Speed);
}
