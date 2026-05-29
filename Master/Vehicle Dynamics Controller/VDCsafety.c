#include "VDCsafety.h"
#include <string.h>

bool VDC_safety_check(const VehicleState* vs, const VDC_State* state) {
    (void)vs; (void)state;
    /* TODO: VDC safety limits for Vehicle Dynamics Controller */
    return true;
}

void VDC_safety_enter_failsoft(VDC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
