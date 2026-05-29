#include "MGTsafety.h"
#include <string.h>

bool MGT_safety_check(const VehicleState* vs, const MGT_State* state) {
    (void)vs; (void)state;
    /* TODO: MGT safety limits for MGU Temperature Control */
    return true;
}

void MGT_safety_enter_failsoft(MGT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
