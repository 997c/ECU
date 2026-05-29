#include "ASSsafety.h"
#include <string.h>

bool ASS_safety_check(const VehicleState* vs, const ASS_State* state) {
    (void)vs; (void)state;
    /* TODO: ASS safety limits for Active Spring Stiffness Control */
    return true;
}

void ASS_safety_enter_failsoft(ASS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
