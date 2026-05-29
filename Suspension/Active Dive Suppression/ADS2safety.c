#include "ADS2safety.h"
#include <string.h>

bool ADS2_safety_check(const VehicleState* vs, const ADS2_State* state) {
    (void)vs; (void)state;
    /* TODO: ADS2 safety limits for Active Dive Suppression */
    return true;
}

void ADS2_safety_enter_failsoft(ADS2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
