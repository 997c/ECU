#include "AHSsafety.h"
#include <string.h>

bool AHS_safety_check(const VehicleState* vs, const AHS_State* state) {
    (void)vs; (void)state;
    /* TODO: AHS safety limits for Active Hydraulic Suspension */
    return true;
}

void AHS_safety_enter_failsoft(AHS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
