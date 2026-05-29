#include "SHSsafety.h"
#include <string.h>

bool SHS_safety_check(const VehicleState* vs, const SHS_State* state) {
    (void)vs; (void)state;
    /* TODO: SHS safety limits for Self-Levelling Hydraulic Suspension */
    return true;
}

void SHS_safety_enter_failsoft(SHS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
