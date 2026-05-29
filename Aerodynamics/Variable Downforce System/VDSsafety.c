#include "VDSsafety.h"
#include <string.h>

bool VDS_safety_check(const VehicleState* vs, const VDS_State* state) {
    (void)vs; (void)state;
    /* TODO: VDS safety limits for Variable Downforce System */
    return true;
}

void VDS_safety_enter_failsoft(VDS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
