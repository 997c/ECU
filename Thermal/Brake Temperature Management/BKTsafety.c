#include "BKTsafety.h"
#include <string.h>

bool BKT_safety_check(const VehicleState* vs, const BKT_State* state) {
    (void)vs; (void)state;
    /* TODO: BKT safety limits for Brake Temperature Management */
    return true;
}

void BKT_safety_enter_failsoft(BKT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
