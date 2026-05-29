#include "ARS2safety.h"
#include <string.h>

bool ARS2_safety_check(const VehicleState* vs, const ARS2_State* state) {
    (void)vs; (void)state;
    /* TODO: ARS2 safety limits for Automatic Regen Switching */
    return true;
}

void ARS2_safety_enter_failsoft(ARS2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
