#include "RDHsafety.h"
#include <string.h>

bool RDH_safety_check(const VehicleState* vs, const RDH_State* state) {
    (void)vs; (void)state;
    /* TODO: RDH safety limits for Redundancy Handling */
    return true;
}

void RDH_safety_enter_failsoft(RDH_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
