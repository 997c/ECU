#include "DASsafety.h"
#include <string.h>

bool DAS_safety_check(const VehicleState* vs, const DAS_State* state) {
    (void)vs; (void)state;
    /* TODO: DAS safety limits for Dual Axis Steering */
    return true;
}

void DAS_safety_enter_failsoft(DAS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
