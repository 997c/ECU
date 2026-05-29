#include "HVSsafety.h"
#include <string.h>

bool HVS_safety_check(const VehicleState* vs, const HVS_State* state) {
    (void)vs; (void)state;
    /* TODO: HVS safety limits for Harvest Strategy Control */
    return true;
}

void HVS_safety_enter_failsoft(HVS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
