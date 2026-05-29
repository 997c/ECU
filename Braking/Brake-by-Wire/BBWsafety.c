#include "BBWsafety.h"
#include <string.h>

bool BBW_safety_check(const VehicleState* vs, const BBW_State* state) {
    (void)vs; (void)state;
    /* TODO: BBW safety limits for Brake-by-Wire */
    return true;
}

void BBW_safety_enter_failsoft(BBW_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
