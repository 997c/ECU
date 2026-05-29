#include "ECTsafety.h"
#include <string.h>

bool ECT_safety_check(const VehicleState* vs, const ECT_State* state) {
    (void)vs; (void)state;
    /* TODO: ECT safety limits for Engine Coolant Thermal Mgmt */
    return true;
}

void ECT_safety_enter_failsoft(ECT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
