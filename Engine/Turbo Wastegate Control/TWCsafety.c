#include "TWCsafety.h"
#include <string.h>

bool TWC_safety_check(const VehicleState* vs, const TWC_State* state) {
    (void)vs; (void)state;
    /* TODO: TWC safety limits for Turbo Wastegate Control */
    return true;
}

void TWC_safety_enter_failsoft(TWC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
