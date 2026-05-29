#include "PPSsafety.h"
#include <string.h>

bool PPS_safety_check(const VehicleState* vs, const PPS_State* state) {
    (void)vs; (void)state;
    /* TODO: PPS safety limits for Porpoising Suppression */
    return true;
}

void PPS_safety_enter_failsoft(PPS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
