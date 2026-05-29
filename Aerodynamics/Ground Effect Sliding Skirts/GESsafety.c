#include "GESsafety.h"
#include <string.h>

bool GES_safety_check(const VehicleState* vs, const GES_State* state) {
    (void)vs; (void)state;
    /* TODO: GES safety limits for Ground Effect Sliding Skirts */
    return true;
}

void GES_safety_enter_failsoft(GES_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
