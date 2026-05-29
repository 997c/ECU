#include "UTRsafety.h"
#include <string.h>

bool UTR_safety_check(const VehicleState* vs, const UTR_State* state) {
    (void)vs; (void)state;
    /* TODO: UTR safety limits for Upshift Torque Recovery */
    return true;
}

void UTR_safety_enter_failsoft(UTR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
