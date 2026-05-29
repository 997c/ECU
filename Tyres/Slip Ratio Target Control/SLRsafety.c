#include "SLRsafety.h"
#include <string.h>

bool SLR_safety_check(const VehicleState* vs, const SLR_State* state) {
    (void)vs; (void)state;
    /* TODO: SLR safety limits for Slip Ratio Target Control */
    return true;
}

void SLR_safety_enter_failsoft(SLR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
