#include "AFTsafety.h"
#include <string.h>

bool AFT_safety_check(const VehicleState* vs, const AFT_State* state) {
    (void)vs; (void)state;
    /* TODO: AFT safety limits for Active Floor Throat Control */
    return true;
}

void AFT_safety_enter_failsoft(AFT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
