#include "EBMsafety.h"
#include <string.h>

bool EBM_safety_check(const VehicleState* vs, const EBM_State* state) {
    (void)vs; (void)state;
    /* TODO: EBM safety limits for Engine Brake Map */
    return true;
}

void EBM_safety_enter_failsoft(EBM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
