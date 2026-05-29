#include "DYCsafety.h"
#include <string.h>

bool DYC_safety_check(const VehicleState* vs, const DYC_State* state) {
    (void)vs; (void)state;
    /* TODO: DYC safety limits for Dynamic Yaw Control */
    return true;
}

void DYC_safety_enter_failsoft(DYC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
