#include "ARSsafety.h"
#include <string.h>

bool ARS_safety_check(const VehicleState* vs, const ARS_State* state) {
    (void)vs; (void)state;
    /* TODO: ARS safety limits for Active Rear Spoiler */
    return true;
}

void ARS_safety_enter_failsoft(ARS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
