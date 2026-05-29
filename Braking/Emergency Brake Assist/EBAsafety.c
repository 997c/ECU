#include "EBAsafety.h"
#include <string.h>

bool EBA_safety_check(const VehicleState* vs, const EBA_State* state) {
    (void)vs; (void)state;
    /* TODO: EBA safety limits for Emergency Brake Assist */
    return true;
}

void EBA_safety_enter_failsoft(EBA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
