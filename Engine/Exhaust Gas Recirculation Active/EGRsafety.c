#include "EGRsafety.h"
#include <string.h>

bool EGR_safety_check(const VehicleState* vs, const EGR_State* state) {
    (void)vs; (void)state;
    /* TODO: EGR safety limits for Exhaust Gas Recirculation Active */
    return true;
}

void EGR_safety_enter_failsoft(EGR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
