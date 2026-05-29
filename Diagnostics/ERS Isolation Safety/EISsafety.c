#include "EISsafety.h"
#include <string.h>

bool EIS_safety_check(const VehicleState* vs, const EIS_State* state) {
    (void)vs; (void)state;
    /* TODO: EIS safety limits for ERS Isolation Safety */
    return true;
}

void EIS_safety_enter_failsoft(EIS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
