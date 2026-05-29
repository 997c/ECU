#include "ESCsafety.h"
#include <string.h>

bool ESC_safety_check(const VehicleState* vs, const ESC_State* state) {
    (void)vs; (void)state;
    /* TODO: ESC safety limits for Electronic Stability Control */
    return true;
}

void ESC_safety_enter_failsoft(ESC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
