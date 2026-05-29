#include "EDLsafety.h"
#include <string.h>

bool EDL_safety_check(const VehicleState* vs, const EDL_State* state) {
    (void)vs; (void)state;
    /* TODO: EDL safety limits for Electronic Differential Lock */
    return true;
}

void EDL_safety_enter_failsoft(EDL_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
