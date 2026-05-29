#include "TCSsafety.h"
#include <string.h>

bool TCS_safety_check(const VehicleState* vs, const TCS_State* state) {
    (void)vs; (void)state;
    /* TODO: TCS safety limits for Traction Control System */
    return true;
}

void TCS_safety_enter_failsoft(TCS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
