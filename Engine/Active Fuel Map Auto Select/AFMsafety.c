#include "AFMsafety.h"
#include <string.h>

bool AFM_safety_check(const VehicleState* vs, const AFM_State* state) {
    (void)vs; (void)state;
    /* TODO: AFM safety limits for Active Fuel Map Auto Select */
    return true;
}

void AFM_safety_enter_failsoft(AFM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
