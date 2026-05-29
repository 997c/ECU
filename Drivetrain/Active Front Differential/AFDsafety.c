#include "AFDsafety.h"
#include <string.h>

bool AFD_safety_check(const VehicleState* vs, const AFD_State* state) {
    (void)vs; (void)state;
    /* TODO: AFD safety limits for Active Front Differential */
    return true;
}

void AFD_safety_enter_failsoft(AFD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
