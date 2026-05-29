#include "LMPsafety.h"
#include <string.h>

bool LMP_safety_check(const VehicleState* vs, const LMP_State* state) {
    (void)vs; (void)state;
    /* TODO: LMP safety limits for Limp Mode Fallback Logic */
    return true;
}

void LMP_safety_enter_failsoft(LMP_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
