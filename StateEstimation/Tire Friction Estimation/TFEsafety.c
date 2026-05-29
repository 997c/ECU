#include "TFEsafety.h"
#include <string.h>

bool TFE_safety_check(const VehicleState* vs, const TFE_State* state) {
    (void)vs; (void)state;
    /* TODO: TFE safety limits for Tire Friction Estimation */
    return true;
}

void TFE_safety_enter_failsoft(TFE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
