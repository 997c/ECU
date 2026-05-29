#include "ADS3safety.h"
#include <string.h>

bool ADS3_safety_check(const VehicleState* vs, const ADS3_State* state) {
    (void)vs; (void)state;
    /* TODO: ADS3 safety limits for Active Drag Shaping */
    return true;
}

void ADS3_safety_enter_failsoft(ADS3_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
