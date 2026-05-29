#include "EPSsafety.h"
#include <string.h>

bool EPS_safety_check(const VehicleState* vs, const EPS_State* state) {
    (void)vs; (void)state;
    /* TODO: EPS safety limits for Electronic Power Steering Auto */
    return true;
}

void EPS_safety_enter_failsoft(EPS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
