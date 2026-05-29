#include "MDMsafety.h"
#include <string.h>

bool MDM_safety_check(const VehicleState* vs, const MDM_State* state) {
    (void)vs; (void)state;
    /* TODO: MDM safety limits for Mid-Corner Diff Map */
    return true;
}

void MDM_safety_enter_failsoft(MDM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
