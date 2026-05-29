#include "ITCsafety.h"
#include <string.h>

bool ITC_safety_check(const VehicleState* vs, const ITC_State* state) {
    (void)vs; (void)state;
    /* TODO: ITC safety limits for Ignition Timing Control */
    return true;
}

void ITC_safety_enter_failsoft(ITC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
