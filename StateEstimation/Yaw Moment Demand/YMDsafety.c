#include "YMDsafety.h"
#include <string.h>

bool YMD_safety_check(const VehicleState* vs, const YMD_State* state) {
    (void)vs; (void)state;
    /* TODO: YMD safety limits for Yaw Moment Demand */
    return true;
}

void YMD_safety_enter_failsoft(YMD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
