#include "SSEsafety.h"
#include <string.h>

bool SSE_safety_check(const VehicleState* vs, const SSE_State* state) {
    (void)vs; (void)state;
    /* TODO: SSE safety limits for Sideslip Angle Estimation */
    return true;
}

void SSE_safety_enter_failsoft(SSE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
