#include "BSDsafety.h"
#include <string.h>

bool BSD_safety_check(const VehicleState* vs, const BSD_State* state) {
    (void)vs; (void)state;
    /* TODO: BSD safety limits for Brake Steer Differential Braking */
    return true;
}

void BSD_safety_enter_failsoft(BSD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
