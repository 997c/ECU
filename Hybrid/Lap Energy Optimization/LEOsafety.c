#include "LEOsafety.h"
#include <string.h>

bool LEO_safety_check(const VehicleState* vs, const LEO_State* state) {
    (void)vs; (void)state;
    /* TODO: LEO safety limits for Lap Energy Optimization */
    return true;
}

void LEO_safety_enter_failsoft(LEO_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
