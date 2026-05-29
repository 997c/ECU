#include "TDEsafety.h"
#include <string.h>

bool TDE_safety_check(const VehicleState* vs, const TDE_State* state) {
    (void)vs; (void)state;
    /* TODO: TDE safety limits for Tire Degradation Estimate */
    return true;
}

void TDE_safety_enter_failsoft(TDE_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
