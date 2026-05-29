#include "FCSsafety.h"
#include <string.h>

bool FCS_safety_check(const VehicleState* vs, const FCS_State* state) {
    (void)vs; (void)state;
    /* TODO: FCS safety limits for Fan Car Suction System */
    return true;
}

void FCS_safety_enter_failsoft(FCS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
