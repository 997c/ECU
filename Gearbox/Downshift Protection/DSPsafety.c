#include "DSPsafety.h"
#include <string.h>

bool DSP_safety_check(const VehicleState* vs, const DSP_State* state) {
    (void)vs; (void)state;
    /* TODO: DSP safety limits for Downshift Protection */
    return true;
}

void DSP_safety_enter_failsoft(DSP_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
