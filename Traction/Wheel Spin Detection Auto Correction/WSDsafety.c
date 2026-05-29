#include "WSDsafety.h"
#include <string.h>

bool WSD_safety_check(const VehicleState* vs, const WSD_State* state) {
    (void)vs; (void)state;
    /* TODO: WSD safety limits for Wheel Spin Detection Auto Correction */
    return true;
}

void WSD_safety_enter_failsoft(WSD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
