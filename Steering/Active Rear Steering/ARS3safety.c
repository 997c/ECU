#include "ARS3safety.h"
#include <string.h>

bool ARS3_safety_check(const VehicleState* vs, const ARS3_State* state) {
    (void)vs; (void)state;
    /* TODO: ARS3 safety limits for Active Rear Steering */
    return true;
}

void ARS3_safety_enter_failsoft(ARS3_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
