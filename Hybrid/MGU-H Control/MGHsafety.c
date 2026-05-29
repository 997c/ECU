#include "MGHsafety.h"
#include <string.h>

bool MGH_safety_check(const VehicleState* vs, const MGH_State* state) {
    (void)vs; (void)state;
    /* TODO: MGH safety limits for MGU-H Control */
    return true;
}

void MGH_safety_enter_failsoft(MGH_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
