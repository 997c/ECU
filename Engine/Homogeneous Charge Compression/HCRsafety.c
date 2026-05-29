#include "HCRsafety.h"
#include <string.h>

bool HCR_safety_check(const VehicleState* vs, const HCR_State* state) {
    (void)vs; (void)state;
    /* TODO: HCR safety limits for Homogeneous Charge Compression */
    return true;
}

void HCR_safety_enter_failsoft(HCR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
