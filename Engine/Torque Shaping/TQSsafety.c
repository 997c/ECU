#include "TQSsafety.h"
#include <string.h>

bool TQS_safety_check(const VehicleState* vs, const TQS_State* state) {
    (void)vs; (void)state;
    /* TODO: TQS safety limits for Torque Shaping */
    return true;
}

void TQS_safety_enter_failsoft(TQS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
