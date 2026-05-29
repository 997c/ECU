#include "ADSsafety.h"
#include <string.h>

bool ADS_safety_check(const VehicleState* vs, const ADS_State* state) {
    (void)vs; (void)state;
    /* TODO: ADS safety limits for Adaptive Damping System */
    return true;
}

void ADS_safety_enter_failsoft(ADS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
