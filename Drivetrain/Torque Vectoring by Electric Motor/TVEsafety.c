#include "TVEsafety.h"
#include <string.h>

bool TVE_safety_check(const VehicleState* vs, const TVE_State* state) {
    (void)vs; (void)state;
    /* TODO: TVE safety limits for Torque Vectoring by Electric Motor */
    return true;
}

void TVE_safety_enter_failsoft(TVE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
