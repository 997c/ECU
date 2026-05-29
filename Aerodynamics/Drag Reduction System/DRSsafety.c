#include "DRSsafety.h"
#include <string.h>

bool DRS_safety_check(const VehicleState* vs, const DRS_State* state) {
    (void)vs; (void)state;
    /* TODO: DRS safety limits for Drag Reduction System */
    return true;
}

void DRS_safety_enter_failsoft(DRS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
