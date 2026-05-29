#include "OTMsafety.h"
#include <string.h>

bool OTM_safety_check(const VehicleState* vs, const OTM_State* state) {
    (void)vs; (void)state;
    /* TODO: OTM safety limits for Oil Thermal Management */
    return true;
}

void OTM_safety_enter_failsoft(OTM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
