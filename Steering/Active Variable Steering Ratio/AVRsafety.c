#include "AVRsafety.h"
#include <string.h>

bool AVR_safety_check(const VehicleState* vs, const AVR_State* state) {
    (void)vs; (void)state;
    /* TODO: AVR safety limits for Active Variable Steering Ratio */
    return true;
}

void AVR_safety_enter_failsoft(AVR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
