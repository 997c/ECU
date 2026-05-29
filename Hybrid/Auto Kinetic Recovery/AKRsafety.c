#include "AKRsafety.h"
#include <string.h>

bool AKR_safety_check(const VehicleState* vs, const AKR_State* state) {
    (void)vs; (void)state;
    /* TODO: AKR safety limits for Auto Kinetic Recovery */
    return true;
}

void AKR_safety_enter_failsoft(AKR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
