#include "ABAsafety.h"
#include <string.h>

bool ABA_safety_check(const VehicleState* vs, const ABA_State* state) {
    (void)vs; (void)state;
    /* TODO: ABA safety limits for Aero Balance Control */
    return true;
}

void ABA_safety_enter_failsoft(ABA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
