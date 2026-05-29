#include "DBCsafety.h"
#include <string.h>

bool DBC_safety_check(const VehicleState* vs, const DBC_State* state) {
    (void)vs; (void)state;
    /* TODO: DBC safety limits for Dynamic Brake Control */
    return true;
}

void DBC_safety_enter_failsoft(DBC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
