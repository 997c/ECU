#include "TQVsafety.h"
#include <string.h>

bool TQV_safety_check(const VehicleState* vs, const TQV_State* state) {
    (void)vs; (void)state;
    /* TODO: TQV safety limits for Torque Vectoring Full Auto */
    return true;
}

void TQV_safety_enter_failsoft(TQV_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
