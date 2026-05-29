#include "VSEsafety.h"
#include <string.h>

bool VSE_safety_check(const VehicleState* vs, const VSE_State* state) {
    (void)vs; (void)state;
    /* TODO: VSE safety limits for Vehicle Speed Estimation */
    return true;
}

void VSE_safety_enter_failsoft(VSE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
