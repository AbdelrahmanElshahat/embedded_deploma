#ifndef STATE_H_
#define STATE_H_

#include <stdio.h>
#include <stdlib.h>

#define STATE_define(_statefunc_) void ST_##_statefunc_()
#define STATE(_statefunc_) ST_##_statefunc_
void US_distance_get(int d);
void DC_motor_set(int s);

extern enum US_state {
    US_busy
} US_state_id;

extern enum CA_state {
    CA_waiting,
    CA_driving
} CA_state_id;
extern enum DC_state {
    DC_idle,
    DC_busy
}DC_state_id;
#endif /* STATE_H_ */
