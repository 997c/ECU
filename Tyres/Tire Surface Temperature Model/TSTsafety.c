#include "TSTsafety.h"
#include <string.h>

bool TST_safety_check(const VehicleState* vs, const TST_State* state) {
    (void)vs; (void)state;
    /* TODO: TST safety limits for Tire Surface Temperature Model */
    return true;
}

void TST_safety_enter_failsoft(TST_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
