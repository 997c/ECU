#include "BMSsafety.h"
#include <string.h>

bool BMS_safety_check(const VehicleState* vs, const BMS_State* state) {
    (void)vs; (void)state;
    /* TODO: BMS safety limits for Brake Migration Shaping */
    return true;
}

void BMS_safety_enter_failsoft(BMS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
