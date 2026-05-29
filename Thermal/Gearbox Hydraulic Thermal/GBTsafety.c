#include "GBTsafety.h"
#include <string.h>

bool GBT_safety_check(const VehicleState* vs, const GBT_State* state) {
    (void)vs; (void)state;
    /* TODO: GBT safety limits for Gearbox Hydraulic Thermal */
    return true;
}

void GBT_safety_enter_failsoft(GBT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
