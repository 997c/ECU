#include "CSAsafety.h"
#include <string.h>

bool CSA_safety_check(const VehicleState* vs, const CSA_State* state) {
    (void)vs; (void)state;
    /* TODO: CSA safety limits for Compressor Surge Avoidance */
    return true;
}

void CSA_safety_enter_failsoft(CSA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
