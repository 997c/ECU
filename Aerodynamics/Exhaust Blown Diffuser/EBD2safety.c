#include "EBD2safety.h"
#include <string.h>

bool EBD2_safety_check(const VehicleState* vs, const EBD2_State* state) {
    (void)vs; (void)state;
    /* TODO: EBD2 safety limits for Exhaust Blown Diffuser */
    return true;
}

void EBD2_safety_enter_failsoft(EBD2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
