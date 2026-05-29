#include "MGKsafety.h"
#include <string.h>

bool MGK_safety_check(const VehicleState* vs, const MGK_State* state) {
    (void)vs; (void)state;
    /* TODO: MGK safety limits for MGU-K Torque Blend Control */
    return true;
}

void MGK_safety_enter_failsoft(MGK_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
