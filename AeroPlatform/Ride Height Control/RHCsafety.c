#include "RHCsafety.h"
#include <string.h>

bool RHC_safety_check(const VehicleState* vs, const RHC_State* state) {
    (void)vs; (void)state;
    /* TODO: RHC safety limits for Ride Height Control */
    return true;
}

void RHC_safety_enter_failsoft(RHC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
