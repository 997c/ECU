#include "TLMsafety.h"
#include <string.h>

bool TLM_safety_check(const VehicleState* vs, const TLM_State* state) {
    (void)vs; (void)state;
    /* TODO: TLM safety limits for Live Telemetry System */
    return true;
}

void TLM_safety_enter_failsoft(TLM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
