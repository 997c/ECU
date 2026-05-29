#include "CVTsafety.h"
#include <string.h>

bool CVT_safety_check(const VehicleState* vs, const CVT_State* state) {
    (void)vs; (void)state;
    /* TODO: CVT safety limits for Continuously Variable Transmission */
    return true;
}

void CVT_safety_enter_failsoft(CVT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
