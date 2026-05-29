#include "ABS3safety.h"
#include <string.h>

bool ABS3_safety_check(const VehicleState* vs, const ABS3_State* state) {
    (void)vs; (void)state;
    /* TODO: ABS3 safety limits for Active Bounce Suppression */
    return true;
}

void ABS3_safety_enter_failsoft(ABS3_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
