#include"DC_motor.h"
#include"CA.h"
#include"US.h"
void setup(){
    US_init();
    DC_init();
    CA_state = STATE(CA_waiting);
    US_state = STATE(US_busy);
}
int main(){
    int i;
    setup();
    while(1){
        US_state();
        CA_state();
        DC_motor_state();
        for ( i = 0; i < 1000; i++);
    }
    return 0;
}
