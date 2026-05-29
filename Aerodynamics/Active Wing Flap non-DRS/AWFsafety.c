#include "AWFsafety.h"
#include <string.h>

bool AWF_safety_check(const VehicleState* vs, const AWF_State* state) {
    (void)vs; (void)state;
    /* TODO: AWF safety limits for Active Wing Flap non-DRS */
    return true;
}

void AWF_safety_enter_failsoft(AWF_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
