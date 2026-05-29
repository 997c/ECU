#include "BTMsafety.h"
#include <string.h>

bool BTM_safety_check(const VehicleState* vs, const BTM_State* state) {
    (void)vs; (void)state;
    /* TODO: BTM safety limits for Battery Thermal Management */
    return true;
}

void BTM_safety_enter_failsoft(BTM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
