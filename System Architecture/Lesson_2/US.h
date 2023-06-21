#ifndef US_H_
#define US_H_
#include "state.h"
void US_init();
STATE_define(US_busy);
extern void (*US_state) ();
#endif /* US_H_ */