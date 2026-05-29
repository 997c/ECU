#include "APCsafety.h"
#include <string.h>

bool APC_safety_check(const VehicleState* vs, const APC_State* state) {
    (void)vs; (void)state;
    /* TODO: APC safety limits for Pre-Chamber Ignition Control */
    return true;
}

void APC_safety_enter_failsoft(APC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
