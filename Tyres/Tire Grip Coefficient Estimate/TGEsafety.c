#include "TGEsafety.h"
#include <string.h>

bool TGE_safety_check(const VehicleState* vs, const TGE_State* state) {
    (void)vs; (void)state;
    /* TODO: TGE safety limits for Tire Grip Coefficient Estimate */
    return true;
}

void TGE_safety_enter_failsoft(TGE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
