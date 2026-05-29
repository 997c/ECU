#include "MRSsafety.h"
#include <string.h>

bool MRS_safety_check(const VehicleState* vs, const MRS_State* state) {
    (void)vs; (void)state;
    /* TODO: MRS safety limits for Magnetorheological Suspension */
    return true;
}

void MRS_safety_enter_failsoft(MRS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
