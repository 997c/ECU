#include "RBAsafety.h"
#include <string.h>

bool RBA_safety_check(const VehicleState* vs, const RBA_State* state) {
    (void)vs; (void)state;
    /* TODO: RBA safety limits for Regenerative Brake Assist Auto */
    return true;
}

void RBA_safety_enter_failsoft(RBA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
