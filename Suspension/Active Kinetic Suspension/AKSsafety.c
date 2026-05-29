#include "AKSsafety.h"
#include <string.h>

bool AKS_safety_check(const VehicleState* vs, const AKS_State* state) {
    (void)vs; (void)state;
    /* TODO: AKS safety limits for Active Kinetic Suspension */
    return true;
}

void AKS_safety_enter_failsoft(AKS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
