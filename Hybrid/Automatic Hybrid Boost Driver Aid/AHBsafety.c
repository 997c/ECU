#include "AHBsafety.h"
#include <string.h>

bool AHB_safety_check(const VehicleState* vs, const AHB_State* state) {
    (void)vs; (void)state;
    /* TODO: AHB safety limits for Automatic Hybrid Boost Driver Aid */
    return true;
}

void AHB_safety_enter_failsoft(AHB_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
