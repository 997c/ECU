#include "SLAsafety.h"
#include <string.h>

bool SLA_safety_check(const VehicleState* vs, const SLA_State* state) {
    (void)vs; (void)state;
    /* TODO: SLA safety limits for Slip Angle Target Control */
    return true;
}

void SLA_safety_enter_failsoft(SLA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
