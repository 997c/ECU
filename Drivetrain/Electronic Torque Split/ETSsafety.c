#include "ETSsafety.h"
#include <string.h>

bool ETS_safety_check(const VehicleState* vs, const ETS_State* state) {
    (void)vs; (void)state;
    /* TODO: ETS safety limits for Electronic Torque Split */
    return true;
}

void ETS_safety_enter_failsoft(ETS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
