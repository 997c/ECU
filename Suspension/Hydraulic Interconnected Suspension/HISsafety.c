#include "HISsafety.h"
#include <string.h>

bool HIS_safety_check(const VehicleState* vs, const HIS_State* state) {
    (void)vs; (void)state;
    /* TODO: HIS safety limits for Hydraulic Interconnected Suspension */
    return true;
}

void HIS_safety_enter_failsoft(HIS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
