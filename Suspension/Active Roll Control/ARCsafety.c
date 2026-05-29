#include "ARCsafety.h"
#include <string.h>

bool ARC_safety_check(const VehicleState* vs, const ARC_State* state) {
    (void)vs; (void)state;
    /* TODO: ARC safety limits for Active Roll Control */
    return true;
}

void ARC_safety_enter_failsoft(ARC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
