#include "TSEsafety.h"
#include <string.h>

bool TSE_safety_check(const VehicleState* vs, const TSE_State* state) {
    (void)vs; (void)state;
    /* TODO: TSE safety limits for Tire State Estimation */
    return true;
}

void TSE_safety_enter_failsoft(TSE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
