#include "EBDsafety.h"
#include <string.h>

bool EBD_safety_check(const VehicleState* vs, const EBD_State* state) {
    (void)vs; (void)state;
    /* TODO: EBD safety limits for Electronic Brakeforce Distribution */
    return true;
}

void EBD_safety_enter_failsoft(EBD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
