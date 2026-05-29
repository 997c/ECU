#include "VSCsafety.h"
#include <string.h>

bool VSC_safety_check(const VehicleState* vs, const VSC_State* state) {
    (void)vs; (void)state;
    /* TODO: VSC safety limits for Vehicle Stability Control */
    return true;
}

void VSC_safety_enter_failsoft(VSC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
