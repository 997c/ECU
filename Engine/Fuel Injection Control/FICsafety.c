#include "FICsafety.h"
#include <string.h>

bool FIC_safety_check(const VehicleState* vs, const FIC_State* state) {
    (void)vs; (void)state;
    /* TODO: FIC safety limits for Fuel Injection Control */
    return true;
}

void FIC_safety_enter_failsoft(FIC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
