#include "TVBsafety.h"
#include <string.h>

bool TVB_safety_check(const VehicleState* vs, const TVB_State* state) {
    (void)vs; (void)state;
    /* TODO: TVB safety limits for Torque Vectoring by Brakes */
    return true;
}

void TVB_safety_enter_failsoft(TVB_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
