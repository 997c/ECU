#include "AUSsafety.h"
#include <string.h>

bool AUS_safety_check(const VehicleState* vs, const AUS_State* state) {
    (void)vs; (void)state;
    /* TODO: AUS safety limits for Active Underbody Sealing */
    return true;
}

void AUS_safety_enter_failsoft(AUS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
