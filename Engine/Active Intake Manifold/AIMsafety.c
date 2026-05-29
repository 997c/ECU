#include "AIMsafety.h"
#include <string.h>

bool AIM_safety_check(const VehicleState* vs, const AIM_State* state) {
    (void)vs; (void)state;
    /* TODO: AIM safety limits for Active Intake Manifold */
    return true;
}

void AIM_safety_enter_failsoft(AIM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
