#include "MDRsafety.h"
#include <string.h>

bool MDR_safety_check(const VehicleState* vs, const MDR_State* state) {
    (void)vs; (void)state;
    /* TODO: MDR safety limits for Mass Damper Tuned Mass */
    return true;
}

void MDR_safety_enter_failsoft(MDR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
