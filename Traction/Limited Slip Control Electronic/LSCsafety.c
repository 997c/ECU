#include "LSCsafety.h"
#include <string.h>

bool LSC_safety_check(const VehicleState* vs, const LSC_State* state) {
    (void)vs; (void)state;
    /* TODO: LSC safety limits for Limited Slip Control Electronic */
    return true;
}

void LSC_safety_enter_failsoft(LSC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
