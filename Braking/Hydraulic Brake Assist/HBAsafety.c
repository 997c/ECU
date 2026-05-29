#include "HBAsafety.h"
#include <string.h>

bool HBA_safety_check(const VehicleState* vs, const HBA_State* state) {
    (void)vs; (void)state;
    /* TODO: HBA safety limits for Hydraulic Brake Assist */
    return true;
}

void HBA_safety_enter_failsoft(HBA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
