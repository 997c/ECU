#include "ABPsafety.h"
#include <string.h>

bool ABP_safety_check(const VehicleState* vs, const ABP_State* state) {
    (void)vs; (void)state;
    /* TODO: ABP safety limits for Automatic Brake Pressure Modulation */
    return true;
}

void ABP_safety_enter_failsoft(ABP_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
