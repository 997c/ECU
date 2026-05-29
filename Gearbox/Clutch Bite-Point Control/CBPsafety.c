#include "CBPsafety.h"
#include <string.h>

bool CBP_safety_check(const VehicleState* vs, const CBP_State* state) {
    (void)vs; (void)state;
    /* TODO: CBP safety limits for Clutch Bite-Point Control */
    return true;
}

void CBP_safety_enter_failsoft(CBP_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
