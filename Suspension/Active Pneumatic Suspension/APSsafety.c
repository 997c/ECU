#include "APSsafety.h"
#include <string.h>

bool APS_safety_check(const VehicleState* vs, const APS_State* state) {
    (void)vs; (void)state;
    /* TODO: APS safety limits for Active Pneumatic Suspension */
    return true;
}

void APS_safety_enter_failsoft(APS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
