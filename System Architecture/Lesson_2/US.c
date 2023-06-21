#include "US.h"
void(*US_state)();
unsigned int distance;
enum US_state US_state_id;
int genrate_random_number(int min, int max)
{
    int random_number = 0;
    random_number = (rand() % (max - min + 1)) + min;
    return random_number;
}
void US_init(){
    printf("US_init\n");
}
STATE_define(US_busy){
    US_state_id = US_busy;
    distance = genrate_random_number(45, 55);
    printf("US_busy : distance = %d\n", distance);
    US_distance_get(distance);
    US_state = STATE(US_busy);
}