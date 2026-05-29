#include "RHEsafety.h"
#include <string.h>

bool RHE_safety_check(const VehicleState* vs, const RHE_State* state) {
    (void)vs; (void)state;
    /* TODO: RHE safety limits for Ride Height Estimation */
    return true;
}

void RHE_safety_enter_failsoft(RHE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
