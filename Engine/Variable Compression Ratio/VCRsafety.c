#include "VCRsafety.h"
#include <string.h>

bool VCR_safety_check(const VehicleState* vs, const VCR_State* state) {
    (void)vs; (void)state;
    /* TODO: VCR safety limits for Variable Compression Ratio */
    return true;
}

void VCR_safety_enter_failsoft(VCR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
