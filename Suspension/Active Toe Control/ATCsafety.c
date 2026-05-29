#include "ATCsafety.h"
#include <string.h>

bool ATC_safety_check(const VehicleState* vs, const ATC_State* state) {
    (void)vs; (void)state;
    /* TODO: ATC safety limits for Active Toe Control */
    return true;
}

void ATC_safety_enter_failsoft(ATC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
