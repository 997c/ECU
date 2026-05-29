#include "EDMsafety.h"
#include <string.h>

bool EDM_safety_check(const VehicleState* vs, const EDM_State* state) {
    (void)vs; (void)state;
    /* TODO: EDM safety limits for Entry Diff Map */
    return true;
}

void EDM_safety_enter_failsoft(EDM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
