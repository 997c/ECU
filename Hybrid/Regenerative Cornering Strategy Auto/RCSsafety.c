#include "RCSsafety.h"
#include <string.h>

bool RCS_safety_check(const VehicleState* vs, const RCS_State* state) {
    (void)vs; (void)state;
    /* TODO: RCS safety limits for Regenerative Cornering Strategy Auto */
    return true;
}

void RCS_safety_enter_failsoft(RCS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
