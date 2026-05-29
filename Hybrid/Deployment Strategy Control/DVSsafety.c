#include "DVSsafety.h"
#include <string.h>

bool DVS_safety_check(const VehicleState* vs, const DVS_State* state) {
    (void)vs; (void)state;
    /* TODO: DVS safety limits for Deployment Strategy Control */
    return true;
}

void DVS_safety_enter_failsoft(DVS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
