#include "WLEsafety.h"
#include <string.h>

bool WLE_safety_check(const VehicleState* vs, const WLE_State* state) {
    (void)vs; (void)state;
    /* TODO: WLE safety limits for Wheel Load Estimation */
    return true;
}

void WLE_safety_enter_failsoft(WLE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
