#include "BLDsafety.h"
#include <string.h>

bool BLD_safety_check(const VehicleState* vs, const BLD_State* state) {
    (void)vs; (void)state;
    /* TODO: BLD safety limits for Brake-to-Limit Device Pit Lane */
    return true;
}

void BLD_safety_enter_failsoft(BLD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
