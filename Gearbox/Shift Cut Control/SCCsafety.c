#include "SCCsafety.h"
#include <string.h>

bool SCC_safety_check(const VehicleState* vs, const SCC_State* state) {
    (void)vs; (void)state;
    /* TODO: SCC safety limits for Shift Cut Control */
    return true;
}

void SCC_safety_enter_failsoft(SCC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
