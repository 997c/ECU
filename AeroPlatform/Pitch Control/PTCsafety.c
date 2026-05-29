#include "PTCsafety.h"
#include <string.h>

bool PTC_safety_check(const VehicleState* vs, const PTC_State* state) {
    (void)vs; (void)state;
    /* TODO: PTC safety limits for Pitch Control */
    return true;
}

void PTC_safety_enter_failsoft(PTC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
