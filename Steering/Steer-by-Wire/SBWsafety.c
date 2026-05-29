#include "SBWsafety.h"
#include <string.h>

bool SBW_safety_check(const VehicleState* vs, const SBW_State* state) {
    (void)vs; (void)state;
    /* TODO: SBW safety limits for Steer-by-Wire */
    return true;
}

void SBW_safety_enter_failsoft(SBW_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
