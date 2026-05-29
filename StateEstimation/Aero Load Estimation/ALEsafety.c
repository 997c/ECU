#include "ALEsafety.h"
#include <string.h>

bool ALE_safety_check(const VehicleState* vs, const ALE_State* state) {
    (void)vs; (void)state;
    /* TODO: ALE safety limits for Aero Load Estimation */
    return true;
}

void ALE_safety_enter_failsoft(ALE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
