#include "FFLsafety.h"
#include <string.h>

bool FFL_safety_check(const VehicleState* vs, const FFL_State* state) {
    (void)vs; (void)state;
    /* TODO: FFL safety limits for Fuel Flow Limit Optimizer */
    return true;
}

void FFL_safety_enter_failsoft(FFL_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
