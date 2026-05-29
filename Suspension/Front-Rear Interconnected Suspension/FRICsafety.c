#include "FRICsafety.h"
#include <string.h>

bool FRIC_safety_check(const VehicleState* vs, const FRIC_State* state) {
    (void)vs; (void)state;
    /* TODO: FRIC safety limits for Front-Rear Interconnected Suspension */
    return true;
}

void FRIC_safety_enter_failsoft(FRIC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
