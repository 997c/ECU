#include "ABRsafety.h"
#include <string.h>

bool ABR_safety_check(const VehicleState* vs, const ABR_State* state) {
    (void)vs; (void)state;
    /* TODO: ABR safety limits for Automatic Brake Regen Blend */
    return true;
}

void ABR_safety_enter_failsoft(ABR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
