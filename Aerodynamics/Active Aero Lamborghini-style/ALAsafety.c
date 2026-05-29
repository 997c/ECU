#include "ALAsafety.h"
#include <string.h>

bool ALA_safety_check(const VehicleState* vs, const ALA_State* state) {
    (void)vs; (void)state;
    /* TODO: ALA safety limits for Active Aero Lamborghini-style */
    return true;
}

void ALA_safety_enter_failsoft(ALA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
