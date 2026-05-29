#include "SOCsafety.h"
#include <string.h>

bool SOC_safety_check(const VehicleState* vs, const SOC_State* state) {
    (void)vs; (void)state;
    /* TODO: SOC safety limits for State of Charge Management */
    return true;
}

void SOC_safety_enter_failsoft(SOC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
