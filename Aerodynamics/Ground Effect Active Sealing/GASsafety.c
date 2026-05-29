#include "GASsafety.h"
#include <string.h>

bool GAS_safety_check(const VehicleState* vs, const GAS_State* state) {
    (void)vs; (void)state;
    /* TODO: GAS safety limits for Ground Effect Active Sealing */
    return true;
}

void GAS_safety_enter_failsoft(GAS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
