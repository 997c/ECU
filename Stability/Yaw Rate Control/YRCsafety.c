#include "YRCsafety.h"
#include <string.h>

bool YRC_safety_check(const VehicleState* vs, const YRC_State* state) {
    (void)vs; (void)state;
    /* TODO: YRC safety limits for Yaw Rate Control */
    return true;
}

void YRC_safety_enter_failsoft(YRC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
