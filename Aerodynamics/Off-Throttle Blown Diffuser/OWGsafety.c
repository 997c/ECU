#include "OWGsafety.h"
#include <string.h>

bool OWG_safety_check(const VehicleState* vs, const OWG_State* state) {
    (void)vs; (void)state;
    /* TODO: OWG safety limits for Off-Throttle Blown Diffuser */
    return true;
}

void OWG_safety_enter_failsoft(OWG_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
