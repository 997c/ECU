#include "ICTsafety.h"
#include <string.h>

bool ICT_safety_check(const VehicleState* vs, const ICT_State* state) {
    (void)vs; (void)state;
    /* TODO: ICT safety limits for Intercooler Charge Air Thermal */
    return true;
}

void ICT_safety_enter_failsoft(ICT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
