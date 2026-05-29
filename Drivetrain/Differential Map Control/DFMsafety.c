#include "DFMsafety.h"
#include <string.h>

bool DFM_safety_check(const VehicleState* vs, const DFM_State* state) {
    (void)vs; (void)state;
    /* TODO: DFM safety limits for Differential Map Control */
    return true;
}

void DFM_safety_enter_failsoft(DFM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
