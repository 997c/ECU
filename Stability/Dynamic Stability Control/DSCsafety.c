#include "DSCsafety.h"
#include <string.h>

bool DSC_safety_check(const VehicleState* vs, const DSC_State* state) {
    (void)vs; (void)state;
    /* TODO: DSC safety limits for Dynamic Stability Control */
    return true;
}

void DSC_safety_enter_failsoft(DSC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
