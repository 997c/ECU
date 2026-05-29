#include "VIGsafety.h"
#include <string.h>

bool VIG_safety_check(const VehicleState* vs, const VIG_State* state) {
    (void)vs; (void)state;
    /* TODO: VIG safety limits for Variable Intake Geometry */
    return true;
}

void VIG_safety_enter_failsoft(VIG_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
