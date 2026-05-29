#include "ETCsafety.h"
#include <string.h>

bool ETC_safety_check(const VehicleState* vs, const ETC_State* state) {
    (void)vs; (void)state;
    /* TODO: ETC safety limits for Electronic Throttle Control */
    return true;
}

void ETC_safety_enter_failsoft(ETC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
