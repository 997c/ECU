#include "APC2safety.h"
#include <string.h>

bool APC2_safety_check(const VehicleState* vs, const APC2_State* state) {
    (void)vs; (void)state;
    /* TODO: APC2 safety limits for Active Pitch Correction */
    return true;
}

void APC2_safety_enter_failsoft(APC2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
