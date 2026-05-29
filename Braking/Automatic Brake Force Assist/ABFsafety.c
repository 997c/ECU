#include "ABFsafety.h"
#include <string.h>

bool ABF_safety_check(const VehicleState* vs, const ABF_State* state) {
    (void)vs; (void)state;
    /* TODO: ABF safety limits for Automatic Brake Force Assist */
    return true;
}

void ABF_safety_enter_failsoft(ABF_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
